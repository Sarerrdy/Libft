#include <stdio.h>
#include <ctype.h>
#include "libft.h"

#define RUN_ISALNUM_TEST(val, desc) do { \
    int ft_result  = ft_isalnum((val)); \
    int std_result = isalnum((val)); \
    int match = (!!ft_result == !!std_result); \
    printf("%s: %s\n", desc, match ? "PASS" : "FAIL"); \
    if (!match) { \
        printf("  Input: %d", (val)); \
        if ((val) >= 0 && (val) <= 127) printf(" ('%c')\n", (val)); else printf("\n"); \
        printf("  ft_isalnum: %d\n", ft_result); \
        printf("  isalnum:    %d\n", std_result); \
    } \
    printf("\n"); \
} while (0)

void test_isalnum(void)
{
    printf("*** ft_isalnum Tests ***\n\n");

    RUN_ISALNUM_TEST(-1, "Negative value (-1)");
    RUN_ISALNUM_TEST(0, "NUL (0)");
    RUN_ISALNUM_TEST('A', "Uppercase letter 'A'");
    RUN_ISALNUM_TEST('z', "Lowercase letter 'z'");
    RUN_ISALNUM_TEST('0', "Digit '0'");
    RUN_ISALNUM_TEST('9', "Digit '9'");
    RUN_ISALNUM_TEST('!', "Symbol '!'");
    RUN_ISALNUM_TEST(' ', "Space character");
    RUN_ISALNUM_TEST(127, "DEL (ASCII 127)");
    RUN_ISALNUM_TEST(200, "Extended ASCII (200)");

    printf("*** End of ft_isalnum Tests ***\n\n");
}