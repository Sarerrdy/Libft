#include <stdio.h>
#include <ctype.h>
#include "libft.h"

#define RUN_TOUPPER_TEST(val, desc) do { \
    int ft_result  = ft_toupper((val)); \
    int std_result = toupper((val)); \
    int match = (ft_result == std_result); \
    printf("%s: %s\n", desc, match ? "PASS" : "FAIL"); \
    if (!match) { \
        printf("  Input: %d ('%c')\n", (val), (val)); \
        printf("  ft_toupper: %d ('%c')\n", ft_result, ft_result); \
        printf("  toupper:    %d ('%c')\n", std_result, std_result); \
    } \
    printf("\n"); \
} while (0)

void test_toupper(void)
{
    printf("*** ft_toupper Tests ***\n\n");

    RUN_TOUPPER_TEST('a', "Lowercase 'a'");
    RUN_TOUPPER_TEST('z', "Lowercase 'z'");
    RUN_TOUPPER_TEST('m', "Lowercase 'm'");
    RUN_TOUPPER_TEST('A', "Uppercase 'A'");
    RUN_TOUPPER_TEST('Z', "Uppercase 'Z'");
    RUN_TOUPPER_TEST('0', "Digit '0'");
    RUN_TOUPPER_TEST('!', "Symbol '!'");
    RUN_TOUPPER_TEST(' ', "Space character");
    RUN_TOUPPER_TEST(127, "DEL (ASCII 127)");
    RUN_TOUPPER_TEST(200, "Extended ASCII 200");
    RUN_TOUPPER_TEST(97, "ASCII 'a' as int");

    printf("*** End of ft_toupper Tests ***\n\n");
}