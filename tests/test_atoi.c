#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

#define RUN_ATOI_TEST(input, desc) do { \
    int ft_result  = ft_atoi((input)); \
    int std_result = atoi((input)); \
    int match = (ft_result == std_result); \
    printf("%s: %s\n", desc, match ? "PASS" : "FAIL"); \
    if (!match) { \
        printf("  Input: \"%s\"\n", (input)); \
        printf("  ft_atoi: %d\n", ft_result); \
        printf("  atoi:    %d\n", std_result); \
    } \
    printf("\n"); \
} while (0)

void test_atoi(void)
{
    printf("*** ft_atoi Tests ***\n\n");

    RUN_ATOI_TEST("", "Empty string");
    RUN_ATOI_TEST("   ", "Whitespace only");
    RUN_ATOI_TEST("7", "Single digit");
    RUN_ATOI_TEST("123", "Positive number");
    RUN_ATOI_TEST("-456", "Negative number");
    RUN_ATOI_TEST("   789", "Leading whitespace");
    RUN_ATOI_TEST("+42", "Positive with plus sign");
    RUN_ATOI_TEST("--42", "Invalid double minus");
    RUN_ATOI_TEST("+-42", "Invalid mixed signs");
    RUN_ATOI_TEST("abc123", "Non-numeric prefix");
    RUN_ATOI_TEST("123abc", "Numeric prefix with trailing chars");
    RUN_ATOI_TEST("2147483647", "INT_MAX");
    RUN_ATOI_TEST("-2147483648", "INT_MIN");
    RUN_ATOI_TEST("9999999999", "Overflow positive");
    RUN_ATOI_TEST("-9999999999", "Overflow negative");

    printf("*** End of ft_atoi Tests ***\n\n");
}