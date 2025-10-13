#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

#define RUN_SPLIT_TEST(input, delim, desc) do { \
    char **result = ft_split((input), (delim)); \
    printf("%s:\n", desc); \
    if (!result) { \
        printf("  Input: \"%s\" Delimiter: '%c'\n", (input) ? (input) : "NULL", (delim)); \
        printf("  Result: NULL (allocation failed or invalid input)\n\n"); \
    } else { \
        int i = 0; \
        while (result[i]) { \
            printf("  [%d]: \"%s\"\n", i, result[i]); \
            i++; \
        } \
        printf("  [%d]: NULL\n", i); \
        for (int j = 0; j < i; j++) \
            free(result[j]); \
        free(result); \
        printf("\n"); \
    } \
} while (0)

void test_split(void)
{
    printf("*** ft_split Tests ***\n\n");

    // 1. Empty string
    RUN_SPLIT_TEST("", ',', "Empty string");

    // 2. No delimiter present
    RUN_SPLIT_TEST("hello", ',', "No delimiter present");

    // 3. Only delimiters
    RUN_SPLIT_TEST(",,,", ',', "Only delimiters");

    // 4. Leading and trailing delimiters
    RUN_SPLIT_TEST(",hello,world,", ',', "Leading and trailing delimiters");

    // 5. Consecutive delimiters
    RUN_SPLIT_TEST("a,,b,,,c", ',', "Consecutive delimiters");

    // 6. Single word
    RUN_SPLIT_TEST("word", ',', "Single word");

    // 7. Delimiter is space
    RUN_SPLIT_TEST("split this string", ' ', "Space as delimiter");

    // 8. Delimiter is null character (edge case)
    RUN_SPLIT_TEST("abc", '\0', "Null delimiter (edge case)");

    // 9. Long input
    RUN_SPLIT_TEST("this,is,a,very,long,string,with,many,commas,to,test,split", ',', "Long input");

    // 10. Whitespace with uneven spacing
    RUN_SPLIT_TEST("  a b  c   d ", ' ', "Whitespace with uneven spacing");

    printf("*** End of ft_split Tests ***\n\n");
}