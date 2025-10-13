#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

void run_strjoin_test(const char *s1, const char *s2, const char *expected, const char *desc)
{
    char *ft_result = ft_strjoin(s1, s2);
    int match = 0;

    if (expected == NULL && ft_result == NULL) {
        match = 1;
    } else if (expected != NULL && ft_result != NULL) {
        match = strcmp(ft_result, expected) == 0;
    }

    printf("%s: %s\n", desc, match ? "PASS" : "FAIL");

    if (!match) {
        printf("  Input s1: \"%s\"\n", s1 ? s1 : "NULL");
        printf("  Input s2: \"%s\"\n", s2 ? s2 : "NULL");
        printf("  Expected: \"%s\"\n", expected ? expected : "NULL");
        printf("  Got:      \"%s\"\n", ft_result ? ft_result : "NULL");
    }

    free(ft_result);
    printf("\n");
}

void test_strjoin(void)
{
    printf("*** ft_strjoin Tests ***\n\n");

    run_strjoin_test("Hello", "World", "HelloWorld", "Join two normal strings");
    run_strjoin_test("", "World", "World", "First string empty");
    run_strjoin_test("Hello", "", "Hello", "Second string empty");
    run_strjoin_test("", "", "", "Both strings empty");
    run_strjoin_test(NULL, "World", "World", "First string NULL (treated as empty)");
    run_strjoin_test("Hello", NULL, "Hello", "Second string NULL (treated as empty)");
    run_strjoin_test(NULL, NULL, NULL, "Both strings NULL → expect NULL");
    run_strjoin_test("Hello ", "World", "Hello World", "Join with space in first string");
    run_strjoin_test("123", "!@#", "123!@#", "Join with special characters");
    run_strjoin_test("This is a long string ", "joined with another long string",
                     "This is a long string joined with another long string",
                     "Join two longer strings");

    printf("*** End of ft_strjoin Tests ***\n\n");
}