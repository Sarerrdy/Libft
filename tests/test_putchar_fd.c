#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"

// Helper: capture ft_putchar_fd output into a buffer
static int capture_putchar_fd(char c, char *buf, size_t bufsize)
{
    int pipefd[2];
    ssize_t rlen;

    if (pipe(pipefd) == -1)
        return -1;

    ft_putchar_fd(c, pipefd[1]);
    close(pipefd[1]);

    rlen = read(pipefd[0], buf, bufsize - 1);
    close(pipefd[0]);

    if (rlen < 0)
        return -1;

    buf[rlen] = '\0';
    return 0;
}

void test_putchar_fd(void)
{
    printf("*** ft_putchar_fd Automated Tests ***\n\n");

    struct {
        char input;
        const char *desc;
    } cases[] = {
        {'A', "Standard output"},
        {'B', "Standard error"},
        {'\n', "Newline character"},
        {'\t', "Tab character"},
        {'Z', "Arbitrary letter"},
    };

    char buf[8];
    char expected[2] = {0};

    // Automated validation for stdout-like behavior
    for (size_t i = 0; i < sizeof(cases)/sizeof(cases[0]); i++)
    {
        if (capture_putchar_fd(cases[i].input, buf, sizeof(buf)) == -1)
        {
            perror("capture_putchar_fd");
            continue;
        }
        expected[0] = cases[i].input;
        expected[1] = '\0';

        if (strcmp(buf, expected) == 0)
            printf("PASS: %-20s -> '%s'\n", cases[i].desc, buf);
        else
            printf("FAIL: %-20s -> got '%s', expected '%s'\n",
                   cases[i].desc, buf, expected);
    }

    // Extra: test writing to stderr
    printf("\nInfo: Writing 'E' to stderr\n");
    ft_putchar_fd('E', 2);
    ft_putchar_fd('\n', 2);

    // Extra: test writing to a file
    int fd = open("test_putchar_fd.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);
    if (fd != -1)
    {
        ft_putchar_fd('C', fd);
        close(fd);
        printf("Info: Wrote 'C' to test_putchar_fd.txt\n");
    }
    else
    {
        perror("open");
    }

    // Extra: invalid file descriptor
    printf("\nInfo: Writing 'D' to invalid fd (-1)\n");
    ft_putchar_fd('D', -1);

    printf("\n*** End of ft_putchar_fd Tests ***\n\n");
}