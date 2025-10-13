#include <stdio.h>
#include <string.h>
#include "libft.h"

#define RUN_STRLEN_TEST(s, desc) do { \
    size_t ft_result  = ft_strlen((s)); \
    size_t std_result = strlen((s)); \
    int match = (ft_result == std_result); \
    printf("%s: %s\n", desc, match ? "PASS" : "FAIL"); \
    if (!match) { \
        printf("  Input: \"%s\"\n", (s)); \
        printf("  ft_strlen: %zu\n", ft_result); \
        printf("  strlen:    %zu\n", std_result); \
    } \
    printf("\n"); \
} while (0)

void test_strlen(void)
{
    printf("*** ft_strlen Tests ***\n\n");

    RUN_STRLEN_TEST("", "Empty string");
    RUN_STRLEN_TEST("A", "Single character");
    RUN_STRLEN_TEST("hello", "Simple word");
    RUN_STRLEN_TEST("this is a test", "Sentence with spaces");
    RUN_STRLEN_TEST("!@#$%^&*()", "Symbols");
    RUN_STRLEN_TEST("1234567890", "Digits");
    RUN_STRLEN_TEST("Lorem ipsum dolor sit amet, consectetur adipiscing elit.", "Long sentence");

    printf("*** End of ft_strlen Tests ***\n\n");
}