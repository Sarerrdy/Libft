#include <stdio.h>
#include <ctype.h>
#include "libft.h"

#define RUN_ISPRINT_TEST(val, desc) do { \
    int ft_result  = ft_isprint((val)); \
    int std_result = isprint((val)); \
    int match = (!!ft_result == !!std_result); \
    printf("%s: %s\n", desc, match ? "PASS" : "FAIL"); \
    if (!match) { \
        printf("  Input: %d", (val)); \
        if ((val) >= 32 && (val) <= 126) printf(" ('%c')\n", (val)); else printf("\n"); \
        printf("  ft_isprint: %d\n", ft_result); \
        printf("  isprint:    %d\n", std_result); \
    } \
    printf("\n"); \
} while (0)

void test_isprint(void)
{
    printf("*** ft_isprint Tests ***\n\n");

    RUN_ISPRINT_TEST(-1, "Negative value (-1)");
    RUN_ISPRINT_TEST(0, "NUL (0)");
    RUN_ISPRINT_TEST(' ', "Space character");
    RUN_ISPRINT_TEST('A', "Printable letter 'A'");
    RUN_ISPRINT_TEST('~', "Printable tilde '~'");
    RUN_ISPRINT_TEST(127, "DEL (127)");
    RUN_ISPRINT_TEST(200, "Extended ASCII (200)");

    printf("*** End of ft_isprint Tests ***\n\n");
}