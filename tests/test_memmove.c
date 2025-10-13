#include <stdio.h>
#include <string.h>
#include "libft.h"

#define RESET_MOVEBUFFERS(init) do { \
    memset(m1, init, sizeof(m1)); \
    memset(r1, init, sizeof(r1)); \
} while (0)

#define RUN_MEMMOVE_TEST(n, dest_off, src_off, desc) do { \
    ft_memmove(m1 + (dest_off), m1 + (src_off), (n)); \
    memmove(r1 + (dest_off), r1 + (src_off), (n)); \
    int same = memcmp(m1, r1, sizeof(m1)) == 0; \
    printf("%s: %s\n", desc, same ? "PASS" : "FAIL"); \
    if (!same) { \
        printf("  Mismatch detected:\n"); \
        printf("  ft_memmove: "); \
        for (size_t i = 0; i < sizeof(m1); i++) printf("%c", m1[i]); \
        printf("\n  memmove:   "); \
        for (size_t i = 0; i < sizeof(r1); i++) printf("%c", r1[i]); \
        printf("\n"); \
    } \
    printf("\n"); \
} while (0)

void test_memmove(void)
{
    printf("*** ft_memmove Tests ***\n\n");

    char m1[20];
    char r1[20];

    // 1. n = 0
    RESET_MOVEBUFFERS('A');
    RUN_MEMMOVE_TEST(0, 0, 0, "n = 0");

    // 2. Non-overlapping copy
    RESET_MOVEBUFFERS('B');
    RUN_MEMMOVE_TEST(5, 0, 10, "Non-overlapping copy");

    // 3. Overlap: dest < src
    RESET_MOVEBUFFERS('C');
    RUN_MEMMOVE_TEST(5, 0, 2, "Overlap (dest < src)");

    // 4. Overlap: dest > src
    RESET_MOVEBUFFERS('D');
    RUN_MEMMOVE_TEST(5, 2, 0, "Overlap (dest > src)");

    // 5. Full buffer move
    RESET_MOVEBUFFERS('E');
    RUN_MEMMOVE_TEST(sizeof(m1), 0, 0, "Full buffer move");

    printf("*** End of ft_memmove Tests ***\n\n");
}