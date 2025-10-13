#include <stdio.h>
#include <string.h>
#include "libft.h"

#define RUN_MEMCHR_TEST(data, c, n, desc) do { \
    void *ft_result = ft_memchr((data), (c), (n)); \
    void *std_result = memchr((data), (c), (n)); \
    int match = (ft_result == std_result); \
    printf("%s: %s\n", desc, match ? "PASS" : "FAIL"); \
    if (!match) { \
        printf("  Char: '%c' (%d), Length: %zu\n", (c), (c), (size_t)(n)); \
        printf("  ft_memchr returned:  %s\n", ft_result ? "FOUND" : "NULL"); \
        printf("  memchr returned:     %s\n", std_result ? "FOUND" : "NULL"); \
    } \
    printf("\n"); \
} while (0)

void test_memchr(void)
{
    printf("*** ft_memchr Tests ***\n\n");

    const char data[] = "Hello\0World\0Again";
    size_t len = sizeof(data);

    // 1. Find 'H' at start
    RUN_MEMCHR_TEST(data, 'H', len, "Find 'H' at start");

    // 2. Find 'W' in middle
    RUN_MEMCHR_TEST(data, 'W', len, "Find 'W' in middle");

    // 3. Find 'n' at end
    RUN_MEMCHR_TEST(data, 'n', len, "Find 'n' at end");

    // 4. Find 'X' (not present)
    RUN_MEMCHR_TEST(data, 'X', len, "Find 'X' (not present)");

    // 5. Find null byte
    RUN_MEMCHR_TEST(data, '\0', len, "Find null byte");

    // 6. Zero-length search
    RUN_MEMCHR_TEST(data, 'o', 0, "Zero-length search");

    printf("*** End of ft_memchr Tests ***\n\n");
}