#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

#define RUN_SUBSTR_TEST(s, start, len, expected, desc) do { \
    char *ft_result = ft_substr((s), (start), (len)); \
    int match = (ft_result && expected && strcmp(ft_result, expected) == 0) || \
                (!ft_result && !expected); \
    printf("%s: %s\n", desc, match ? "PASS" : "FAIL"); \
    if (!match) { \
        printf("  Input:    \"%s\"\n", (s) ? (s) : "NULL"); \
        printf("  Start:    %zu\n", (size_t)(start)); \
        printf("  Length:   %zu\n", (size_t)(len)); \
        printf("  Expected: \"%s\"\n", (expected) ? (expected) : "NULL"); \
        printf("  Got:      \"%s\"\n", (ft_result) ? (ft_result) : "NULL"); \
    } \
    free(ft_result); \
    printf("\n"); \
} while (0)

void test_substr(void)
{
    printf("*** ft_substr Tests ***\n\n");

    // 1. Normal substring
    RUN_SUBSTR_TEST("Hello World", 6, 5, "World", "Extract 'World'");

    // 2. Start beyond string length
    RUN_SUBSTR_TEST("Hello", 10, 3, "", "Start beyond string length");

    // 3. Length exceeds string end
    RUN_SUBSTR_TEST("Hello", 3, 10, "lo", "Length exceeds string end");

    // 4. Zero length
    RUN_SUBSTR_TEST("Hello", 2, 0, "", "Zero length");

    // 5. Empty string input
    RUN_SUBSTR_TEST("", 0, 5, "", "Empty string input");

    // 6. Full string
    RUN_SUBSTR_TEST("Test", 0, 4, "Test", "Full string");

    printf("*** End of ft_substr Tests ***\n\n");
}