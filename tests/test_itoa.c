#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include "libft.h"

#define RUN_ITOA_TEST(value, desc) do { \
    char *result = ft_itoa(value); \
    char ref[64]; \
    snprintf(ref, sizeof(ref), "%d", value); \
    printf("%s:\n", desc); \
    if (!result) { \
        printf("  Input: %d\n", value); \
        printf("  Result: NULL (allocation failed)\n\n"); \
    } else { \
        if (strcmp(result, ref) == 0) \
            printf("  PASS: Input=%d Output=\"%s\"\n\n", value, result); \
        else \
            printf("  FAIL: Input=%d Got=\"%s\" Expected=\"%s\"\n\n", \
                   value, result, ref); \
        free(result); \
    } \
} while (0)

void test_itoa(void)
{
    printf("*** ft_itoa Tests ***\n\n");

    // 1. Zero
    RUN_ITOA_TEST(0, "Zero");

    // 2. Positive single digit
    RUN_ITOA_TEST(7, "Positive single digit");

    // 3. Negative single digit
    RUN_ITOA_TEST(-3, "Negative single digit");

    // 4. Positive multi-digit
    RUN_ITOA_TEST(12345, "Positive multi-digit");

    // 5. Negative multi-digit
    RUN_ITOA_TEST(-98765, "Negative multi-digit");

    // 6. INT_MAX
    RUN_ITOA_TEST(INT_MAX, "INT_MAX");

    // 7. INT_MIN
    RUN_ITOA_TEST(INT_MIN, "INT_MIN");

    // 8. Positive with trailing zeros
    RUN_ITOA_TEST(1000, "Positive with trailing zeros");

    // 9. Edge case: -1
    RUN_ITOA_TEST(-1, "Negative one");

    // 10. Edge case: 1
    RUN_ITOA_TEST(1, "Positive one");

    printf("*** End of ft_itoa Tests ***\n\n");
}