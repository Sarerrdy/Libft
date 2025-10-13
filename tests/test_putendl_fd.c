#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include "libft.h"

#define RUN_PUTENDL_TEST(input, expected, desc) do { \
    char buffer[256] = {0}; \
    int pipefd[2]; \
    pipe(pipefd); \
    ft_putendl_fd((input), pipefd[1]); \
    close(pipefd[1]); \
    read(pipefd[0], buffer, sizeof(buffer) - 1); \
    close(pipefd[0]); \
    int match = strcmp(buffer, (expected)) == 0; \
    printf("%s: %s\n", desc, match ? "PASS" : "FAIL"); \
    if (!match) { \
        printf("  Input: \"%s\"\n", (input)); \
        printf("  Expected: \"%s\"\n", (expected)); \
        printf("  Got:      \"%s\"\n", buffer); \
    } \
    printf("\n"); \
} while (0)

void test_putendl_fd(void)
{
    printf("*** ft_putendl_fd Tests ***\n\n");

    RUN_PUTENDL_TEST("", "\n", "Empty string");
    RUN_PUTENDL_TEST("Hello", "Hello\n", "Simple word");
    RUN_PUTENDL_TEST("Line with space", "Line with space\n", "Sentence with space");
    RUN_PUTENDL_TEST("123456", "123456\n", "Digits");
    RUN_PUTENDL_TEST("!@#$%^", "!@#$%^\n", "Symbols");
    RUN_PUTENDL_TEST("Ends with newline\n", "Ends with newline\n\n", "Already ends with newline");
    RUN_PUTENDL_TEST("Lorem ipsum dolor sit amet", "Lorem ipsum dolor sit amet\n", "Long sentence");

    printf("*** End of ft_putendl_fd Tests ***\n\n");
}