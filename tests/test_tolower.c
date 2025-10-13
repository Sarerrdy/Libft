#include <stdio.h>
#include <ctype.h>
#include "libft.h"

#define RUN_TOLOWER_TEST(val, desc) do { \
    int ft_result  = ft_tolower((val)); \
    int std_result = tolower((val)); \
    int match = (ft_result == std_result); \
    printf("%s: %s\n", desc, match ? "PASS" : "FAIL"); \
    if (!match) { \
        printf("  Input: %d ('%c')\n", (val), (val)); \
        printf("  ft_tolower: %d ('%c')\n", ft_result, ft_result); \
        printf("  tolower:    %d ('%c')\n", std_result, std_result); \
    } \
    printf("\n"); \
} while (0)

void test_tolower(void)
{
    printf("*** ft_tolower Tests ***\n\n");

    RUN_TOLOWER_TEST('a', "Lowercase 'a'");
    RUN_TOLOWER_TEST('z', "Lowercase 'z'");
    RUN_TOLOWER_TEST('m', "Lowercase 'm'");
    RUN_TOLOWER_TEST('A', "Uppercase 'A'");
    RUN_TOLOWER_TEST('Z', "Uppercase 'Z'");
    RUN_TOLOWER_TEST('0', "Digit '0'");
    RUN_TOLOWER_TEST('!', "Symbol '!'");
    RUN_TOLOWER_TEST(' ', "Space character");
    RUN_TOLOWER_TEST(127, "DEL (ASCII 127)");
    RUN_TOLOWER_TEST(200, "Extended ASCII 200");
    RUN_TOLOWER_TEST(97, "ASCII 'a' as int");

    printf("*** End of ft_tolower Tests ***\n\n");
}