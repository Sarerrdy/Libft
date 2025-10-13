#include <stdio.h>
#include <ctype.h>
#include "libft.h"

#define RUN_ISASCII_TEST(val, desc) do { \
    int ft_result  = ft_isascii((val)); \
    int std_result = isascii((val)); \
    int match = (ft_result == std_result); \
    printf("%s: %s\n", desc, match ? "PASS" : "FAIL"); \
    if (!match) { \
        printf("  Input: %d\n", (val)); \
        printf("  ft_isascii: %d\n", ft_result); \
        printf("  isascii:    %d\n", std_result); \
    } \
    printf("\n"); \
} while (0)

void test_isascii(void)
{
    printf("*** ft_isascii Tests ***\n\n");

    RUN_ISASCII_TEST(-1, "Negative value (-1)");
    RUN_ISASCII_TEST(0, "ASCII NUL (0)");
    RUN_ISASCII_TEST(127, "ASCII DEL (127)");
    RUN_ISASCII_TEST(128, "Out-of-range (128)");

    printf("*** End of ft_isascii Tests ***\n\n");
}