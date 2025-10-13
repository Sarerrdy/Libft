#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

#define RUN_STRDUP_TEST(input, desc) do { \
    char *ft_result = ft_strdup(input); \
    char *std_result = strdup(input); \
    int match = 0; \
    if (!ft_result || !std_result) { \
        match = (ft_result == NULL && std_result == NULL); \
    } else { \
        match = (strcmp(ft_result, std_result) == 0); \
    } \
    printf("%s: %s\n", desc, match ? "PASS" : "FAIL"); \
    if (!match) { \
        printf("  Input: \"%s\"\n", input); \
        printf("  Expected: \"%s\"\n", std_result ? std_result : "NULL"); \
        printf("  Got:      \"%s\"\n", ft_result ? ft_result : "NULL"); \
    } \
    free(ft_result); \
    free(std_result); \
    printf("\n"); \
} while (0)

void test_strdup(void)
{
    printf("*** ft_strdup Tests ***\n\n");

    // 1. Empty string
    RUN_STRDUP_TEST("", "Empty string");

    // 2. Short string
    RUN_STRDUP_TEST("Hello", "Short string");

    // 3. Long string
    RUN_STRDUP_TEST("This is a long string used to test ft_strdup against strdup for correctness.", "Long string");

    // 4. String with embedded nulls (manual comparison only)
    char embedded[] = {'A', 'B', '\0', 'C', 'D', '\0'};
    RUN_STRDUP_TEST(embedded, "Embedded nulls (partial copy)");

    // 5. Special characters
    RUN_STRDUP_TEST("!@#$%^&*()_+-=[]{}|;':\",.<>/?", "Special characters");

    // 6. Whitespace string
    RUN_STRDUP_TEST("   \t\n  Hello World  \n", "Whitespace string");

    // 7. Very large string (system-dependent)
    char *large = malloc(1000000);
    if (large)
    {
        memset(large, 'A', 999999);
        large[999999] = '\0';
        RUN_STRDUP_TEST(large, "Very large string");
        free(large);
    }

    printf("*** End of ft_strdup Tests ***\n\n");
}