#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
#include "libft.h"

#define RUN_STRNSTR_TEST(big, little, len, desc) do { \
    char *res_ft  = ft_strnstr((big), (little), (len)); \
    char *res_std = strnstr((big), (little), (len)); \
    int match = (res_ft == res_std); \
    printf("%s: %s\n", desc, match ? "PASS" : "FAIL"); \
    if (!match) { \
        printf("  big:    \"%s\"\n", (big)); \
        printf("  little: \"%s\"\n", (little)); \
        printf("  len:    %zu\n", (size_t)(len)); \
        printf("  ft_strnstr:  %s\n", res_ft ? res_ft : "NULL"); \
        printf("  strnstr:     %s\n", res_std ? res_std : "NULL"); \
    } \
    printf("\n"); \
} while (0)

void test_strnstr(void)
{
    printf("*** ft_strnstr Tests ***\n\n");

    // 1. Exact match
    RUN_STRNSTR_TEST("Hello World", "World", 11, "Exact match");

    // 2. Needle cut off by len
    RUN_STRNSTR_TEST("Hello World", "World", 5, "Needle cut off by len");

    // 3. Empty needle (should return big)
    RUN_STRNSTR_TEST("Hello", "", 5, "Empty needle");

    // 4. Empty haystack with non-empty needle
    RUN_STRNSTR_TEST("", "Hello", 5, "Empty haystack");

    // 5. Both empty, len = 0
    RUN_STRNSTR_TEST("", "", 0, "Both empty, len = 0");

    // 6. Needle longer than haystack
    RUN_STRNSTR_TEST("abc", "abcd", 4, "Needle longer than haystack");

    // 7. Match in the middle
    RUN_STRNSTR_TEST("abcabcabc", "cab", 9, "Match in the middle");

    // 8. Match exists but len too small
    RUN_STRNSTR_TEST("abcabcabc", "cab", 2, "Match exists but len too small");

    // 9. Overlapping matches
    RUN_STRNSTR_TEST("aaaaaa", "aaa", 6, "Overlapping matches");

    // 10. Match at the very end
    RUN_STRNSTR_TEST("abcdef", "def", 6, "Match at the very end");

    // 11. Truncated before match
    RUN_STRNSTR_TEST("abcdef", "def", 5, "Truncated before match");

    // 12. No match at all
    RUN_STRNSTR_TEST("abcdef", "xyz", 6, "No match at all");

    printf("*** End of ft_strnstr Tests ***\n\n");
}