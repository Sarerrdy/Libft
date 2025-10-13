#include <stdio.h>
#include <string.h>
#include "libft.h"

#define RUN_MEMCMP_TEST(s1, s2, n, desc) do { \
    int ft_result = ft_memcmp((s1), (s2), (n)); \
    int std_result = memcmp((s1), (s2), (n)); \
    int match = (ft_result == std_result) || \
                ((ft_result < 0) == (std_result < 0) && (ft_result > 0) == (std_result > 0)); \
    printf("%s: %s\n", desc, match ? "PASS" : "FAIL"); \
    if (!match) { \
        printf("  Compared %zu bytes\n", (size_t)(n)); \
        printf("  ft_memcmp returned: %d\n", ft_result); \
        printf("  memcmp returned:    %d\n", std_result); \
    } \
    printf("\n"); \
} while (0)

void test_memcmp(void)
{
    printf("*** ft_memcmp Tests ***\n\n");

    const char a[] = "Hello\0World\0Again";
    const char b[] = "Hello\0World\0Again";
    const char c[] = "Hxllo\0World\0Again";
    const char d[] = "Hello\0Wxrld\0Again";
    const char e[] = "Hello\0World\0AgaiN";
    const char f[] = "HELLO\0WORLD\0AGAIN";

    // 1. Identical buffers
    RUN_MEMCMP_TEST(a, b, sizeof(a), "Identical buffers");

    // 2. Mismatch at byte 1
    RUN_MEMCMP_TEST(a, c, sizeof(a), "Mismatch at byte 1");

    // 3. Mismatch in middle
    RUN_MEMCMP_TEST(a, d, sizeof(a), "Mismatch in middle");

    // 4. Mismatch at last byte
    RUN_MEMCMP_TEST(a, e, sizeof(a), "Mismatch at last byte");

    // 5. Completely different case
    RUN_MEMCMP_TEST(a, f, sizeof(a), "Different case");

    // 6. Zero-length comparison
    RUN_MEMCMP_TEST(a, f, 0, "Zero-length comparison");

    // 7. Partial match (first 5 bytes)
    RUN_MEMCMP_TEST(a, c, 5, "Partial match (first 5)");

    // 8. Match through embedded nulls
    RUN_MEMCMP_TEST(a, b, 12, "Match through embedded nulls");

    printf("*** End of ft_memcmp Tests ***\n\n");
}