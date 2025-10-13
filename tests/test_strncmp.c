#include <stdio.h>
#include <string.h>
#include "libft.h"

#define RUN_STRNCMP_TEST(s1, s2, n, desc) do { \
    int ft_result  = ft_strncmp((s1), (s2), (n)); \
    int std_result = strncmp((s1), (s2), (n)); \
    int match = (ft_result == std_result) || \
                ((ft_result < 0) == (std_result < 0) && (ft_result > 0) == (std_result > 0)); \
    printf("%s: %s\n", desc, match ? "PASS" : "FAIL"); \
    if (!match) { \
        printf("  s1: \"%s\"\n", (s1)); \
        printf("  s2: \"%s\"\n", (s2)); \
        printf("  n:  %zu\n", (size_t)(n)); \
        printf("  ft_strncmp:  %d\n", ft_result); \
        printf("  strncmp:     %d\n", std_result); \
    } \
    printf("\n"); \
} while (0)

void test_strncmp(void)
{
    printf("*** ft_strncmp Tests ***\n\n");

    RUN_STRNCMP_TEST("abc", "abc", 3, "Exact match");
    RUN_STRNCMP_TEST("abc", "abc", 5, "Match with extended length");
    RUN_STRNCMP_TEST("abc", "abd", 2, "Mismatch after prefix");
    RUN_STRNCMP_TEST("abc", "abd", 3, "Mismatch at last byte");
    RUN_STRNCMP_TEST("", " y", 1, "Empty vs non-empty");
    RUN_STRNCMP_TEST("", "abc", 3, "Empty vs non-empty (long)");
    RUN_STRNCMP_TEST("abc", "", 3, "Non-empty vs empty");
    RUN_STRNCMP_TEST("abc", "abcd", 4, "Short vs long");
    RUN_STRNCMP_TEST("abcd", "abc", 4, "Long vs short");
    RUN_STRNCMP_TEST("abc", "xyz", 0, "Zero-length comparison");
    RUN_STRNCMP_TEST("ab\0c", "ab\0d", 4, "Embedded nulls");
    RUN_STRNCMP_TEST("ab\0c", "ab", 4, "Null in one string only");
    RUN_STRNCMP_TEST("ABC", "abc", 3, "Case sensitivity");
    RUN_STRNCMP_TEST("abc", "abc", 100, "Match with large n");
    RUN_STRNCMP_TEST("abcdef", "abcdeg", 6, "Mismatch at last byte");
    RUN_STRNCMP_TEST("abc", "abcdef", 10, "Short vs long with large n");
    RUN_STRNCMP_TEST("\200", "\0", 1, "Non-ASCII vs null");

    printf("*** End of ft_strncmp Tests ***\n\n");
}