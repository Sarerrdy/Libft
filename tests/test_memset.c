#include <stdio.h>
#include <string.h>
#include "libft.h"

#define RESET_BUFFERS(init) do { \
    memset(buf1, init, sizeof(buf1)); \
    memset(buf2, init, sizeof(buf2)); \
} while (0)

#define RUN_MEMSET_TEST(c, n, desc) do { \
    void *res_ft  = ft_memset(buf1, (c), (n)); \
    void *res_std = memset(buf2, (c), (n)); \
    int same = memcmp(buf1, buf2, sizeof(buf1)) == 0; \
    printf("%s: %s\n", desc, same ? "PASS" : "FAIL"); \
    printf("  c = %d, n = %zu\n", (c), (size_t)(n)); \
    printf("  ft_ptr  = %p\n", res_ft); \
    printf("  std_ptr = %p\n", res_std); \
    if (!same) { \
        printf("  ft_memset: ["); \
        for (size_t i = 0; i < sizeof(buf1); i++) printf("%02X ", (unsigned char)buf1[i]); \
        printf("]\n  memset:    ["); \
        for (size_t i = 0; i < sizeof(buf2); i++) printf("%02X ", (unsigned char)buf2[i]); \
        printf("]\n"); \
    } \
    printf("\n"); \
} while (0)

void test_memset(void)
{
    printf("*** ft_memset Tests ***\n\n");

    char buf1[20];
    char buf2[20];

    // 1. n = 0 (should not modify anything)
    RESET_BUFFERS('A');
    size_t zero = 0;
    RUN_MEMSET_TEST('B', zero, "n = 0 (no change)");

    // 2. Fill entire buffer with 'X'
    RESET_BUFFERS('A');
    RUN_MEMSET_TEST('X', sizeof(buf1), "Fill entire buffer with 'X'");

    // 3. Fill part of buffer (first 5 bytes)
    RESET_BUFFERS('A');
    RUN_MEMSET_TEST('Z', 5, "Fill first 5 bytes with 'Z'");

    // 4. Fill with 0 (common for initialization)
    RESET_BUFFERS('A');
    RUN_MEMSET_TEST(0, sizeof(buf1), "Fill with 0");

    // 5. Fill with non-ASCII value (e.g., 200)
    RESET_BUFFERS('A');
    RUN_MEMSET_TEST(200, 10, "Fill with 200");

    // 6. Fill with 255 (0xFF)
    RESET_BUFFERS('A');
    RUN_MEMSET_TEST(255, 8, "Fill with 255");

    // 7. Fill with negative value (-1 → 0xFF)
    RESET_BUFFERS('A');
    RUN_MEMSET_TEST(-1, 6, "Fill with -1 (0xFF)");

    // 8. Fill only middle section (simulate offset pointer)
    RESET_BUFFERS('A');
    void *res_ft  = ft_memset(buf1 + 5, '*', 5);
    void *res_std = memset(buf2 + 5, '*', 5);
    int same = memcmp(buf1, buf2, sizeof(buf1)) == 0;
    printf("Fill middle section: %s\n", same ? "PASS" : "FAIL");
    printf("  ft_ptr  = %p\n", res_ft);
    printf("  std_ptr = %p\n", res_std);
    if (!same) {
        printf("  ft_memset: [");
        for (size_t i = 0; i < sizeof(buf1); i++) printf("%02X ", (unsigned char)buf1[i]);
        printf("]\n  memset:    [");
        for (size_t i = 0; i < sizeof(buf2); i++) printf("%02X ", (unsigned char)buf2[i]);
        printf("]\n");
    }

    printf("\n*** End of ft_memset Tests ***\n\n");
}