#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <limits.h>
#include "libft.h"

// Helper: capture ft_putnbr_fd output into a buffer
static int capture_putnbr_fd(int n, char *buf, size_t bufsize)
{
    int pipefd[2];
    ssize_t rlen;

    if (pipe(pipefd) == -1)
        return -1;

    ft_putnbr_fd(n, pipefd[1]);
    close(pipefd[1]);

    rlen = read(pipefd[0], buf, bufsize - 1);
    close(pipefd[0]);

    if (rlen < 0)
        return -1;

    buf[rlen] = '\0';
    return 0;
}

void test_putnbr_fd(void)
{
    printf("*** ft_putnbr_fd Automated Tests ***\n\n");

    struct {
        int value;
        const char *desc;
    } cases[] = {
        {0, "Zero"},
        {12345, "Positive"},
        {-98765, "Negative"},
        {INT_MAX, "INT_MAX"},
        {INT_MIN, "INT_MIN"},
    };

    char buf[64];
    char ref[64];

    for (size_t i = 0; i < sizeof(cases)/sizeof(cases[0]); i++)
    {
        if (capture_putnbr_fd(cases[i].value, buf, sizeof(buf)) == -1)
        {
            perror("capture_putnbr_fd");
            continue;
        }
        snprintf(ref, sizeof(ref), "%d", cases[i].value);

        if (strcmp(buf, ref) == 0)
            printf("PASS: %s -> %s\n", cases[i].desc, buf);
        else
            printf("FAIL: %s -> got %s, expected %s\n",
                   cases[i].desc, buf, ref);
    }

    printf("\nInfo: Writing 42 to stderr\n");
    ft_putnbr_fd(42, 2);
    ft_putchar_fd('\n', 2);

    int fd = open("test_putnbr_fd.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);
    if (fd != -1)
    {
        ft_putnbr_fd(123456789, fd);
        close(fd);
        printf("Info: Wrote 123456789 to test_putnbr_fd.txt\n");
    }
    else
    {
        perror("open");
    }

    printf("\n*** End of ft_putnbr_fd Tests ***\n\n");
}