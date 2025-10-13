#include <stdio.h>
#include <string.h>
#include "libft.h"

#define RESET_BUFFERS(init) do { \
    memset(buf1, init, sizeof(buf1)); \
    memset(buf2, init, sizeof(buf2)); \
} while (0)

#define RUN_BZERO_TEST(n, desc) do { \
    RESET_BUFFERS('A'); \
    ft_bzero(buf1, (n)); \
    bzero(buf2, (n)); \
    int same = memcmp(buf1, buf2, sizeof(buf1)) == 0; \
    printf("%s: %s\n", desc, same ? "PASS" : "FAIL"); \
    if (!same) { \
        printf("  n = %zu\n", (size_t)(n)); \
        printf("  ft_bzero: ["); \
        for (size_t i = 0; i < sizeof(buf1); i++) printf("%02X ", (unsigned char)buf1[i]); \
        printf("]\n  bzero:    ["); \
        for (size_t i = 0; i < sizeof(buf2); i++) printf("%02X ", (unsigned char)buf2[i]); \
        printf("]\n"); \
    } \
    printf("\n"); \
} while (0)

void test_bzero(void)
{
    printf("*** ft_bzero Tests ***\n\n");

    char buf1[20];
    char buf2[20];

    // 1. n = 0 (should not modify anything)
    RUN_BZERO_TEST(0, "n = 0 (no change)");

    // 2. Zero entire buffer
    RUN_BZERO_TEST(sizeof(buf1), "Zero entire buffer");

    // 3. Zero first 5 bytes
    RUN_BZERO_TEST(5, "Zero first 5 bytes");

    // 4. Zero middle section (simulate offset pointer)
    RESET_BUFFERS('A');
    ft_bzero(buf1 + 5, 5);
    bzero(buf2 + 5, 5);
    int same = memcmp(buf1, buf2, sizeof(buf1)) == 0;
    printf("Zero middle section: %s\n", same ? "PASS" : "FAIL");
    if (!same) {
        printf("  ft_bzero: [");
        for (size_t i = 0; i < sizeof(buf1); i++) printf("%02X ", (unsigned char)buf1[i]);
        printf("]\n  bzero:    [");
        for (size_t i = 0; i < sizeof(buf2); i++) printf("%02X ", (unsigned char)buf2[i]);
        printf("]\n");
    }

    printf("\n*** End of ft_bzero Tests ***\n\n");
}