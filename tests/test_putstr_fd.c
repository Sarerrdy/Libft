#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "libft.h"

#define RUN_PUTSTR_TEST(input, expected, desc) do { \
    char buffer[256] = {0}; \
    int pipefd[2]; \
    pipe(pipefd); \
    ft_putstr_fd((input), pipefd[1]); \
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

void test_putstr_fd(void)
{
    printf("*** ft_putstr_fd Tests ***\n\n");

    RUN_PUTSTR_TEST("", "", "Empty string");
    RUN_PUTSTR_TEST("Hello", "Hello", "Simple word");
    RUN_PUTSTR_TEST("Line with space", "Line with space", "Sentence with space");
    RUN_PUTSTR_TEST("123456", "123456", "Digits");
    RUN_PUTSTR_TEST("!@#$%^", "!@#$%^", "Symbols");
    RUN_PUTSTR_TEST("Ends with newline\n", "Ends with newline\n", "Already ends with newline");
    RUN_PUTSTR_TEST("Lorem ipsum dolor sit amet", "Lorem ipsum dolor sit amet", "Long sentence");

    printf("*** End of ft_putstr_fd Tests ***\n\n");
}