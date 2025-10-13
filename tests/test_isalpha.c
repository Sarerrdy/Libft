#include <stdio.h>
#include <ctype.h>
#include "libft.h"

#define RUN_ISALPHA_TEST(val, desc) do { \
    int ft_result  = ft_isalpha((val)); \
    int std_result = isalpha((val)); \
    int match = (!!ft_result == !!std_result); \
    printf("%s: %s\n", desc, match ? "PASS" : "FAIL"); \
    if (!match) { \
        printf("  Input: %d", (val)); \
        if ((val) >= 0 && (val) <= 127) printf(" ('%c')\n", (val)); else printf("\n"); \
        printf("  ft_isalpha: %d\n", ft_result); \
        printf("  isalpha:    %d\n", std_result); \
    } \
    printf("\n"); \
} while (0)

void test_isalpha(void)
{
    printf("*** ft_isalpha Tests ***\n\n");

    RUN_ISALPHA_TEST(-1, "Negative value (-1)");
    RUN_ISALPHA_TEST('0', "Digit character '0'");
    RUN_ISALPHA_TEST(10, "Newline (ASCII 10)");
    RUN_ISALPHA_TEST(' ', "Space character");
    RUN_ISALPHA_TEST('!', "Symbol '!'");
    RUN_ISALPHA_TEST('A', "Uppercase letter 'A'");
    RUN_ISALPHA_TEST('z', "Lowercase letter 'z'");
    RUN_ISALPHA_TEST(127, "DEL (ASCII 127)");
    RUN_ISALPHA_TEST(200, "Extended ASCII (200)");

    printf("*** End of ft_isalpha Tests ***\n\n");
}