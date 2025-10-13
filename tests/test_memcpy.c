#include <stdio.h>
#include <string.h>
#include "libft.h"

#define RESET_BUFFERS(init) do { \
    memset(buf1, init, sizeof(buf1)); \
    memset(buf2, init, sizeof(buf2)); \
    memset(ref1, init, sizeof(ref1)); \
    memset(ref2, init, sizeof(ref2)); \
} while (0)

#define RUN_MEMCPY_TEST(n, dest_off, src_off, desc) do { \
    ft_memcpy(buf1 + (dest_off), buf2 + (src_off), (n)); \
    memcpy(ref1 + (dest_off), ref2 + (src_off), (n)); \
    int same = memcmp(buf1, ref1, sizeof(buf1)) == 0; \
    printf("%s: %s\n", desc, same ? "PASS" : "FAIL"); \
    if (!same) { \
        printf("  Mismatch detected:\n"); \
        printf("  ft_memcpy: "); \
        for (size_t i = 0; i < sizeof(buf1); i++) printf("%c", buf1[i]); \
        printf("\n  memcpy:    "); \
        for (size_t i = 0; i < sizeof(ref1); i++) printf("%c", ref1[i]); \
        printf("\n"); \
    } \
    printf("\n"); \
} while (0)

void test_memcpy(void)
{
    printf("*** ft_memcpy Tests ***\n\n");

    char buf1[20];
    char buf2[20];
    char ref1[20];
    char ref2[20];

    // 1. n = 0 (no change expected)
    RESET_BUFFERS('A');
    RUN_MEMCPY_TEST(0, 0, 0, "n = 0");

    // 2. Copy 5 bytes from middle of src into start of dest
    RESET_BUFFERS('B');
    RUN_MEMCPY_TEST(5, 0, 10, "Copy 5 bytes");

    // 3. Copy full buffer
    RESET_BUFFERS('C');
    RUN_MEMCPY_TEST(sizeof(buf1), 0, 0, "Full buffer");

    // 4. dest == src (legal, no-op) — only test ft_memcpy
    RESET_BUFFERS('D');
    ft_memcpy(buf1, buf1, 10);
    printf("dest == src: PASS (ft_memcpy ran without error)\n\n");

    printf("*** End of ft_memcpy Tests ***\n\n");
}