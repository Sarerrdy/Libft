#include <stdio.h>
#include <string.h>
#include "libft.h"

#define RUN_STRRCHR_TEST(s, c, desc) do { \
    char *res_ft  = ft_strrchr((s), (c)); \
    char *res_std = strrchr((s), (c)); \
    int match = (res_ft == res_std); \
    printf("%s: %s\n", desc, match ? "PASS" : "FAIL"); \
    if (!match) { \
        printf("  Input:    \"%s\"\n", (s)); \
        printf("  Char:     '%c' (%d)\n", (c), (c)); \
        printf("  ft_strrchr:  %s\n", res_ft ? res_ft : "NULL"); \
        printf("  strrchr:     %s\n", res_std ? res_std : "NULL"); \
    } \
    printf("\n"); \
} while (0)

void test_strrchr(void)
{
    printf("*** ft_strrchr Tests ***\n\n");

    // 1. Character present in the middle
    RUN_STRRCHR_TEST("Hello World", 'o', "Char 'o' in middle");

    // 2. Character present at the beginning
    RUN_STRRCHR_TEST("Hello", 'H', "Char 'H' at beginning");

    // 3. Character present at the end
    RUN_STRRCHR_TEST("Hello", 'o', "Char 'o' at end");

    // 4. Character not present
    RUN_STRRCHR_TEST("Hello", 'x', "Char 'x' not present");

    // 5. Empty string, search for non-null
    RUN_STRRCHR_TEST("", 'a', "Empty string, search for 'a'");

    // 6. Empty string, search for '\0'
    RUN_STRRCHR_TEST("", '\0', "Empty string, search for '\\0'");

    // 7. Non-empty string, search for '\0'
    RUN_STRRCHR_TEST("Hello", '\0', "Search for '\\0' in non-empty string");

    // 8. Multiple occurrences (should return last)
    RUN_STRRCHR_TEST("banana", 'a', "Multiple 'a's, expect last");

    // 9. Non-ASCII character (UTF-8 edge case) — skipped for ASCII-only
    // RUN_STRRCHR_TEST("héllo", 'é', "UTF-8 character (skipped)");

    printf("*** End of ft_strrchr Tests ***\n\n");
}