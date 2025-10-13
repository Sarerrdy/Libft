#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
#include "libft.h"

#define RUN_STRLCAT_TEST(dst_init, src_val, size_val, desc) do { \
    char dst[100]; \
    char ref[100]; \
    strcpy(dst, dst_init); \
    strcpy(ref, dst_init); \
    const char *src = src_val; \
    size_t size = size_val; \
    size_t ft_result  = ft_strlcat(dst, src, size); \
    size_t std_result = strlcat(ref, src, size); \
    int match = (ft_result == std_result) && (strcmp(dst, ref) == 0); \
    printf("%s: %s\n", desc, match ? "PASS" : "FAIL"); \
    if (!match) { \
        printf("  src: \"%s\"\n", src); \
        printf("  size: %zu\n", size); \
        printf("  ft_dst: \"%s\"\n", dst); \
        printf("  std_dst: \"%s\"\n", ref); \
        printf("  ft_return: %zu\n", ft_result); \
        printf("  std_return: %zu\n", std_result); \
    } \
    printf("\n"); \
} while (0)

void test_strlcat(void)
{
    printf("*** ft_strlcat Tests ***\n\n");

    // 1. Empty src
    RUN_STRLCAT_TEST("abc", "", 20, "Empty src");

    // 2. Empty dst
    RUN_STRLCAT_TEST("", "hello", 20, "Empty dst");

    // 3. Exact fit
    RUN_STRLCAT_TEST("abc", "def", 7, "Exact fit");

    // 4. Truncation
    RUN_STRLCAT_TEST("abc", "defghijklmnop", 10, "Truncation");

    // 5. Size is zero
    RUN_STRLCAT_TEST("abc", "xyz", 0, "Size is zero");

    // 6. Size smaller than dst length
    RUN_STRLCAT_TEST("abcdefghij", "XYZ", 5, "Size smaller than dst length");

    // 7. Size larger than actual buffer
    RUN_STRLCAT_TEST("abc", "oversize", 100, "Size larger than buffer");

    printf("*** End of ft_strlcat Tests ***\n\n");
}