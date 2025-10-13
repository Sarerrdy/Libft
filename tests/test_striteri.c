#include <stdio.h>
#include <string.h>
#include "libft.h"

// Example callback functions
static void to_upper_even(unsigned int i, char *c)
{
    if (i % 2 == 0 && *c >= 'a' && *c <= 'z')
        *c -= 32;
}

static void mask_vowels(unsigned int i, char *c)
{
    (void)i;
    if (*c=='a'||*c=='e'||*c=='i'||*c=='o'||*c=='u'||
        *c=='A'||*c=='E'||*c=='I'||*c=='O'||*c=='U')
        *c = '*';
}

static void shift_by_index(unsigned int i, char *c)
{
    *c = *c + (i % 3);
}

static void identity(unsigned int i, char *c)
{
    (void)i;
    (void)c;
}

#define RUN_STRITERI_TEST(desc, input, func) do { \
    char buffer[256]; \
    snprintf(buffer, sizeof(buffer), "%s", input); \
    printf("%s:\n", desc); \
    printf("  Before: \"%s\"\n", buffer); \
    ft_striteri(buffer, func); \
    printf("  After:  \"%s\"\n\n", buffer); \
} while (0)

void test_striteri(void)
{
    printf("*** ft_striteri Tests ***\n\n");

    // 1. Empty string
    RUN_STRITERI_TEST("Empty string", "", to_upper_even);

    // 2. Single character
    RUN_STRITERI_TEST("Single lowercase char", "a", to_upper_even);

    // 3. Mixed case string
    RUN_STRITERI_TEST("Mixed case string", "HeLLo", to_upper_even);

    // 4. String with spaces
    RUN_STRITERI_TEST("String with spaces", "hello world", to_upper_even);

    // 5. String with punctuation
    RUN_STRITERI_TEST("String with punctuation", "42!libft?", to_upper_even);

    // 6. Apply vowel masking
    RUN_STRITERI_TEST("Mask vowels", "Hello World", mask_vowels);

    // 7. Apply index-based shifting
    RUN_STRITERI_TEST("Shift by index", "abcdef", shift_by_index);

    // 8. Identity function (no change)
    RUN_STRITERI_TEST("Identity function", "unchanged", identity);

    // 9. Long string (stress test)
    RUN_STRITERI_TEST("Long alphabet string", "abcdefghijklmnopqrstuvwxyz", to_upper_even);

    // 10. Extended ASCII / UTF-8 characters
    RUN_STRITERI_TEST("Extended ASCII", "héllo", to_upper_even);

    // 11. NULL string input (should do nothing safely)
    printf("NULL input test:\n");
    ft_striteri(NULL, to_upper_even);
    printf("  Passed safely (no crash)\n\n");

    // 12. NULL function pointer (should do nothing safely)
    char buf[] = "test";
    printf("NULL function pointer test:\n");
    printf("  Before: \"%s\"\n", buf);
    ft_striteri(buf, NULL);
    printf("  After:  \"%s\"\n\n", buf);

    printf("*** End of ft_striteri Tests ***\n\n");
}