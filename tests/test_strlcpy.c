#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
#include "libft.h"

#define RUN_STRLCPY_TEST(src_val, size_val, desc) do { \
    char dst[100]; \
    char ref[100]; \
    memset(dst, 'X', sizeof(dst)); \
    memset(ref, 'X', sizeof(ref)); \
    const char *src = src_val; \
    size_t size = size_val; \
    size_t ft_result  = ft_strlcpy(dst, src, size); \
    size_t std_result = strlcpy(ref, src, size); \
    int match = (ft_result == std_result) && (memcmp(dst, ref, sizeof(dst)) == 0); \
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

void test_strlcpy(void)
{
    printf("*** ft_strlcpy Tests ***\n\n");

    // 1. Empty string
    RUN_STRLCPY_TEST("", 10, "Empty src");

    // 2. Exact fit
    RUN_STRLCPY_TEST("abcd", 5, "Exact fit");

    // 3. Truncation
    RUN_STRLCPY_TEST("hello world", 5, "Truncation");

    // 4. Size is zero
    RUN_STRLCPY_TEST("nonempty", 0, "Size is zero");

    // 5. Size is 1
    RUN_STRLCPY_TEST("test", 1, "Size is 1");

    // 6. Large src, small buffer
    RUN_STRLCPY_TEST("abcdefghijklmnopqrstuvwxyz", 4, "Large src, small buffer");

    // 7. Embedded nulls
    RUN_STRLCPY_TEST("abc\0def", 10, "Embedded nulls");

    // 8. Size larger than dst buffer
    char small_dst[5];
    char small_ref[5];
    const char *src = "oversize";
    size_t size = 100;
    size_t ft_result = ft_strlcpy(small_dst, src, size);
    size_t std_result = strlcpy(small_ref, src, size);
    int match = (ft_result == std_result) && (memcmp(small_dst, small_ref, sizeof(small_dst)) == 0);
    //int match = (ft_result == std_result) && (strcmp(small_dst, small_ref) == 0);
    printf("Size larger than buffer: %s\n", match ? "PASS" : "FAIL");
    if (!match) {
        printf("  src: \"%s\"\n", src);
        printf("  size: %zu\n", size);
        printf("  ft_dst: \"%s\"\n", small_dst);
        printf("  std_dst: \"%s\"\n", small_ref);
        printf("  ft_return: %zu\n", ft_result);
        printf("  std_return: %zu\n", std_result);
    }

    printf("\n*** End of ft_strlcpy Tests ***\n\n");
}