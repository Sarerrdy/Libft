#include <stdio.h>
#include <ctype.h>
#include "libft.h"

#define RUN_ISDIGIT_TEST(val, desc) do { \
    int ft_result  = ft_isdigit((val)); \
    int std_result = isdigit((val)); \
    int match = (!!ft_result == !!std_result); \
    printf("%s: %s\n", desc, match ? "PASS" : "FAIL"); \
    if (!match) { \
        printf("  Input: %d", (val)); \
        if ((val) >= 0 && (val) <= 127) printf(" ('%c')\n", (val)); else printf("\n"); \
        printf("  ft_isdigit: %d\n", ft_result); \
        printf("  isdigit:    %d\n", std_result); \
    } \
    printf("\n"); \
} while (0)

void test_isdigit(void)
{
    printf("*** ft_isdigit Tests ***\n\n");

    RUN_ISDIGIT_TEST(-3, "Negative value (-3)");
    RUN_ISDIGIT_TEST('0', "Character '0'");
    RUN_ISDIGIT_TEST('5', "Character '5'");
    RUN_ISDIGIT_TEST(5, "Integer 5");
    RUN_ISDIGIT_TEST(19, "Integer 19");

    printf("*** End of ft_isdigit Tests ***\n\n");
}