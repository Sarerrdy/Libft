#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include "libft.h"

#define RUN_CALLOC_TEST(nmemb, size, expect_null, desc) do { \
    void *ft_result = ft_calloc((nmemb), (size)); \
    int match = 0; \
    if (expect_null) { \
        match = (ft_result == NULL); \
    } else { \
        if (ft_result != NULL) { \
            size_t total = (size_t)(nmemb) * (size); \
            unsigned char *bytes = (unsigned char *)ft_result; \
            int all_zero = 1; \
            for (size_t i = 0; i < total; i++) { \
                if (bytes[i] != 0) { all_zero = 0; break; } \
            } \
            match = all_zero; \
        } \
    } \
    printf("%s: %s\n", desc, match ? "PASS" : "FAIL"); \
    if (!match) { \
        printf("  Expected: %s\n", expect_null ? "NULL" : "non-NULL zeroed block"); \
        printf("  Got:      %s\n", ft_result ? "non-NULL" : "NULL"); \
    } \
    free(ft_result); \
    printf("\n"); \
} while (0)

void test_calloc(void)
{
    printf("*** ft_calloc Tests ***\n\n");

    // 1. Zero nmemb
    RUN_CALLOC_TEST(0, sizeof(int), 0, "Zero nmemb (malloc(0) allowed)");

    // 2. Zero size
    RUN_CALLOC_TEST(10, 0, 0, "Zero size (malloc(0) allowed)");

    // 3. Overflow case
    RUN_CALLOC_TEST(SIZE_MAX, 2, 1, "Overflow should return NULL");

    // 4. Small normal allocation
    RUN_CALLOC_TEST(5, sizeof(int), 0, "Small allocation, should be zeroed");

    // 5. Large allocation (system-dependent)
    RUN_CALLOC_TEST(1000000, sizeof(int), 0, "Large allocation (system-dependent)");

    printf("*** End of ft_calloc Tests ***\n\n");
}