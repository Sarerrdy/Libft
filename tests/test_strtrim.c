#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

#define RUN_STRTRIM_TEST(s1, set, expected, desc) do { \
    char *ft_result = ft_strtrim((s1), (set)); \
    int match = 0; \
    if ((expected == NULL && ft_result == NULL) || \
        (expected != NULL && ft_result != NULL && strcmp(ft_result, expected) == 0)) { \
        match = 1; \
    } \
    printf("%s: %s\n", desc, match ? "PASS" : "FAIL"); \
    if (!match) { \
        printf("  Input:    \"%s\"\n", (s1) ? (s1) : "NULL"); \
        printf("  Set:      \"%s\"\n", (set) ? (set) : "NULL"); \
        printf("  Expected: \"%s\"\n", (expected) ? (expected) : "NULL"); \
        printf("  Got:      \"%s\"\n", (ft_result) ? (ft_result) : "NULL"); \
    } \
    free(ft_result); \
    printf("\n"); \
} while (0)

void test_strtrim(void)
{
    printf("*** ft_strtrim Tests ***\n\n");

    // 1. Trim spaces from both ends
    RUN_STRTRIM_TEST("  Hello World  ", " ", "Hello World", "Trim spaces from both ends");

    // 2. Trim 'x' from both ends
    RUN_STRTRIM_TEST("xx42Viennaxx", "x", "42Vienna", "Trim 'x' from both ends");

    // 3. Empty set — no trimming
    RUN_STRTRIM_TEST("42Vienna", "", "42Vienna", "Empty set — no trimming");

    // 4. Empty string input
    RUN_STRTRIM_TEST("", " ", "", "Empty string input");

    // 5. Only set characters — should return empty string
    RUN_STRTRIM_TEST("     ", " ", "", "Only set characters");

    // 6. All characters in set — should return empty string
    RUN_STRTRIM_TEST("abc", "abc", "", "All characters in set");

    // 7. No characters in set — should return original string
    RUN_STRTRIM_TEST("abc", "xyz", "abc", "No characters in set");

    // 8. Internal spaces preserved
    RUN_STRTRIM_TEST("  Hello  World  ", " ", "Hello  World", "Trim spaces — internal preserved");

    // 9. Trim whitespace characters
    RUN_STRTRIM_TEST("  \t\nHello\t\n  ", " \t\n", "Hello", "Trim whitespace characters");

    printf("*** End of ft_strtrim Tests ***\n\n");
}