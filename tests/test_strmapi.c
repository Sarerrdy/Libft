#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

// Example mapping functions
static char to_upper(unsigned int i, char c)
{
    (void)i;
    if (c >= 'a' && c <= 'z')
        return c - 32;
    return c;
}

static char shift_char(unsigned int i, char c)
{
    return c + (i % 3);
}

static char identity(unsigned int i, char c)
{
    (void)i;
    return c;
}

#define RUN_STRMAPI_TEST(desc, input, func) do { \
    char *result = ft_strmapi((input), (func)); \
    printf("%s:\n", desc); \
    if (!result) { \
        printf("  Input: %s\n", (input) ? (input) : "NULL"); \
        printf("  Result: NULL\n\n"); \
    } else { \
        printf("  Input:  \"%s\"\n", (input) ? (input) : "NULL"); \
        printf("  Output: \"%s\"\n\n", result); \
        free(result); \
    } \
} while (0)

void test_strmapi(void)
{
    printf("*** ft_strmapi Tests ***\n\n");

    // 1. Empty string
    RUN_STRMAPI_TEST("Empty string", "", to_upper);

    // 2. Single character
    RUN_STRMAPI_TEST("Single lowercase character", "a", to_upper);

    // 3. Mixed case string
    RUN_STRMAPI_TEST("Mixed case string", "HeLLo", to_upper);

    // 4. String with spaces
    RUN_STRMAPI_TEST("String with spaces", "hello world", to_upper);

    // 5. String with punctuation
    RUN_STRMAPI_TEST("String with punctuation", "42!libft?", to_upper);

    // 6. Using index-based shifting
    RUN_STRMAPI_TEST("Shift characters by index", "abcdef", shift_char);

    // 7. Identity function (no change)
    RUN_STRMAPI_TEST("Identity function", "unchanged", identity);

    // 8. NULL input string
    RUN_STRMAPI_TEST("NULL input string", NULL, to_upper);

    // 9. Long string
    RUN_STRMAPI_TEST("Long alphabet string", "abcdefghijklmnopqrstuvwxyz", to_upper);

    // 10. String with non-ASCII chars
    RUN_STRMAPI_TEST("String with extended ASCII", "héllo", to_upper);

    printf("*** End of ft_strmapi Tests ***\n\n");
}