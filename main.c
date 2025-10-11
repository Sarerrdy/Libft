#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include "libft.h"
#include <fcntl.h>     
#include <sys/types.h>
#include <sys/stat.h>

#include <bsd/string.h>

char	*ft_strrchr(const char *s, int c);

// Example mapping functions
char to_upper(unsigned int i, char c) {
    (void)i;
    return (c >= 'a' && c <= 'z') ? c - 32 : c;
}

char shift_char(unsigned int i, char c) {
    return c + (i % 3); // shift ASCII value by index mod 3
}

char identity(unsigned int i, char c) {
    (void)i;
    return c; // return unchanged
}

// Uppercase every even index
void to_upper_even(unsigned int i, char *c) {
    if (i % 2 == 0 && *c >= 'a' && *c <= 'z')
        *c -= 32;
}

// Replace vowels with '*'
void mask_vowels(unsigned int i, char *c) {
    (void)i;
    if (*c=='a'||*c=='e'||*c=='i'||*c=='o'||*c=='u'||
        *c=='A'||*c=='E'||*c=='I'||*c=='O'||*c=='U')
        *c = '*';
}

// Shift ASCII value by index
void shift_by_index(unsigned int i, char *c) {
    *c = *c + (i % 3);
}

// Identity (no change)
void identity1(unsigned int i, char *c) {
    (void)i;
    (void)c;
}




int	main(void)
{
    //  int val;

   //--------------alphabets-----------------
	// val = -1;
	// printf("ft_isalpha=%d isalpha=%d\n", ft_isalpha(val),
	// 	isalpha(val));
	// val = '0';
	// printf("('%c') ft_isalpha=%d isalpha=%d\n", val,
	// 	ft_isalpha(val), isalpha(val));
	// val = 10;
	// printf("(\\n) ft_isalpha=%d isalpha=%d\n", ft_isalpha(val),
	// 	isalpha(val));
	// val = ' ';
	// printf("('%c') ft_isalpha=%d isalpha=%d\n", val,
	// 	ft_isalpha(val), isalpha(val));
	// val = '!';
	// printf("('%c') ft_isalpha=%d isalpha=%d\n", val,
	// 	ft_isalpha(val), isalpha(val));
	// val = 'A';
	// printf("('%c') ft_isalpha=%d isalpha=%d\n", val,
	// 	ft_isalpha(val), isalpha(val));
	// val = 'z';
	// printf("('%c') ft_isalpha=%d isalpha=%d\n", val,
	// 	ft_isalpha(val), isalpha(val));
	// // DEL (127)
	// val = 127;
	// printf("ft_isalpha=%d isalpha=%d\n", ft_isalpha(val),
	// 	isalpha(val));
	// // Extended ASCII (>127)
	// val = 200;
	// printf("ft_isalpha=%d isalpha=%d\n", ft_isalpha(val),
	// 	isalpha(val));

    
    //--------------digit-----------------
    // val = -3;
	// printf("ft_isdigit=%d isdigit=%d\n", ft_isdigit(val),
	// 	isdigit(val));
    // val = '0';
	// printf("ft_isdigit=%d isdigit=%d\n", ft_isdigit(val),
	// 	isdigit(val));
    // val = '5';
	// printf("ft_isdigit=%d isdigit=%d\n", ft_isdigit(val),
	// 	isdigit(val));
    // val = 5;
	// printf("ft_isdigit=%d isdigit=%d\n", ft_isdigit(val),
	// 	isdigit(val));
    // val = 19;
	// printf("ft_isdigit=%d isdigit=%d\n", ft_isdigit(val),
	// 	isdigit(val));

    // ---------------- isascii ----------------
    // printf("\n=== Testing isascii ===\n");

    // val = -1;
    // printf("ft_isascii=%d isascii=%d\n", ft_isascii(val), isascii(val));

    // val = 0;
    // printf("ft_isascii=%d isascii=%d\n", ft_isascii(val), isascii(val));

    // val = 127;
    // printf("ft_isascii=%d isascii=%d\n", ft_isascii(val), isascii(val));

    // val = 128;
    // printf("ft_isascii=%d isascii=%d\n", ft_isascii(val), isascii(val));

    
    // ---------------- isprint ----------------
    // printf("\n=== Testing isprint ===\n");

    // val = -1;
    // printf("ft_isprint=%d isprint=%d\n", ft_isprint(val), isprint(val));

    // val = 0;
    // printf("(NUL) ft_isprint=%d isprint=%d\n", ft_isprint(val), isprint(val));

    // val = ' ';
    // printf("(' ') ft_isprint=%d isprint=%d\n", ft_isprint(val), isprint(val));

    // val = 'A';
    // printf("('A') ft_isprint=%d isprint=%d\n", ft_isprint(val), isprint(val));

    // val = '~';
    // printf("('~') ft_isprint=%d isprint=%d\n", ft_isprint(val), isprint(val));

    // val = 127;
    // printf("(DEL) ft_isprint=%d isprint=%d\n", ft_isprint(val), isprint(val));

    // val = 200;
    // printf("(200) ft_isprint=%d isprint=%d\n", ft_isprint(val), isprint(val));
    // for strlen


    // ---------------- strlen ----------------
    // printf("\n=== Testing strlen ===\n");

    // const char *s;
    // s = "";
    // printf("ft_strlen=\"%s\" : %d, strlen : %lu\n", s, ft_strlen(s), strlen(s));
    // s = "A";
    // printf("ft_strlen=\"%s\" : %d, strlen : %lu\n", s, ft_strlen(s), strlen(s));
    // s = "hello";
    // printf("ft_strlen=\"%s\" : %d, strlen : %lu\n", s, ft_strlen(s), strlen(s));
    // s = "this is a test";
    // printf("ft_strlen=\"%s\" : %d, strlen : %lu\n", s, ft_strlen(s), strlen(s));
    // s = "!@#$%^&*()";
    // printf("ft_strlen=\"%s\" : %d, strlen : %lu\n", s, ft_strlen(s), strlen(s));
    // s = "1234567890";
    // printf("ft_strlen=\"%s\" : %d, strlen : %lu\n", s, ft_strlen(s), strlen(s));
    // s = "Lorem ipsum dolor sit amet, consectetur adipiscing elit.";
    // printf("ft_strlen=\"%s\" : %d, strlen : %lu\n", s, ft_strlen(s), strlen(s));

   
    // // ---------------- toupper ----------------
    // printf("\n=== Testing toupper ===\n");

    // val = 'a';
    // printf("ft_toupper('%c') : '%c', toupper : '%c'\n", val, ft_toupper(val), toupper(val));

    // val = 'z';
    // printf("ft_toupper('%c') : '%c', toupper : '%c'\n", val, ft_toupper(val), toupper(val));

    // val = 'm';
    // printf("ft_toupper('%c') : '%c', toupper : '%c'\n", val, ft_toupper(val), toupper(val));

    // val = 'A';
    // printf("ft_toupper('%c') : '%c', toupper : '%c'\n", val, ft_toupper(val), toupper(val));

    // val = 'Z';
    // printf("ft_toupper('%c') : '%c', toupper : '%c'\n", val, ft_toupper(val), toupper(val));

    // val = '0';
    // printf("ft_toupper('%c') : '%c', toupper : '%c'\n", val, ft_toupper(val), toupper(val));

    // val = '!';
    // printf("ft_toupper('%c') : '%c', toupper : '%c'\n", val, ft_toupper(val), toupper(val));

    // val = ' ';
    // printf("ft_toupper('%c') : '%c', toupper : '%c'\n", val, ft_toupper(val), toupper(val));

    // val = 127;
    // printf("ft_toupper(%d) : %d, toupper : %d\n", val, ft_toupper(val), toupper(val));

    // val = 200;
    // printf("ft_toupper(%d) : %d, toupper : %d\n", val, ft_toupper(val), toupper(val));
    // val = 97;
    // printf("ft_toupper(%d) : %d, toupper : %d\n", val, ft_toupper(val), toupper(val));


    // ---------------- toupper ----------------
    // printf("\n=== Testing tolower ===\n");

    // val = 'a';
    // printf("ft_tolower('%c') : '%c', tolower : '%c'\n", val, ft_tolower(val), tolower(val));

    // val = 'z';
    // printf("ft_tolower('%c') : '%c', tolower : '%c'\n", val, ft_tolower(val), tolower(val));

    // val = 'm';
    // printf("ft_tolower('%c') : '%c', tolower : '%c'\n", val, ft_tolower(val), tolower(val));

    // val = 'A';
    // printf("ft_tolower('%c') : '%c', tolower : '%c'\n", val, ft_tolower(val), tolower(val));

    // val = 'Z';
    // printf("ft_tolower('%c') : '%c', tolower : '%c'\n", val, ft_tolower(val), tolower(val));

    // val = '0';
    // printf("ft_tolower('%c') : '%c', tolower : '%c'\n", val, ft_tolower(val), tolower(val));

    // val = '!';
    // printf("ft_tolower('%c') : '%c', tolower : '%c'\n", val, ft_tolower(val), tolower(val));

    // val = ' ';
    // printf("ft_tolower('%c') : '%c', tolower : '%c'\n", val, ft_tolower(val), tolower(val));

    // val = 127;
    // printf("ft_tolower(%d) : %d, tolower : %d\n", val, ft_tolower(val), tolower(val));

    // val = 200;
    // printf("ft_tolower(%d) : %d, tolower : %d\n", val, ft_tolower(val), tolower(val));
    // val = 97;
    // printf("ft_tolower(%d) : %d, tolower : %d\n", val, ft_tolower(val), tolower(val));


// ---------------- atoi ----------------
// printf("\n=== Testing atoi ===\n");

// const char *s;
// s = "";
// printf("ft_atoi=\"%s\" : %d, atoi : %d\n", s, ft_atoi(s), atoi(s));
// s = "   ";
// printf("ft_atoi=\"%s\" : %d, atoi : %d\n", s, ft_atoi(s), atoi(s));
// s = "7";
// printf("ft_atoi=\"%s\" : %d, atoi : %d\n", s, ft_atoi(s), atoi(s));
// s = "123";
// printf("ft_atoi=\"%s\" : %d, atoi : %d\n", s, ft_atoi(s), atoi(s));
// s = "-456";
// printf("ft_atoi=\"%s\" : %d, atoi : %d\n", s, ft_atoi(s), atoi(s));
// s = "   789";
// printf("ft_atoi=\"%s\" : %d, atoi : %d\n", s, ft_atoi(s), atoi(s));
// s = "+42";
// printf("ft_atoi=\"%s\" : %d, atoi : %d\n", s, ft_atoi(s), atoi(s));
// s = "--42";
// printf("ft_atoi=\"%s\" : %d, atoi : %d\n", s, ft_atoi(s), atoi(s));
// s = "+-42";
// printf("ft_atoi=\"%s\" : %d, atoi : %d\n", s, ft_atoi(s), atoi(s));
// s = "abc123";strlcpy
// printf("ft_atoi=\"%s\" : %d, atoi : %d\n", s, ft_atoi(s), atoi(s));
// s = "123abc";
// printf("ft_atoi=\"%s\" : %d, atoi : %d\n", s, ft_atoi(s), atoi(s));
// s = "2147483647";
// printf("ft_atoi=\"%s\" : %d, atoi : %d\n", s, ft_atoi(s), atoi(s));
// s = "-2147483648";
// printf("ft_atoi=\"%s\" : %d, atoi : %d\n", s, ft_atoi(s), atoi(s));
// s = "9999999999";
// printf("ft_atoi=\"%s\" : %d, atoi : %d\n", s, ft_atoi(s), atoi(s));
// s = "-9999999999";
// printf("ft_atoi=\"%s\" : %d, atoi : %d\n", s, ft_atoi(s), atoi(s));




// ---------------- strlcpy ----------------

// printf("\n=== Testing strlcpy ===\n");

// char dst[10];
// char original_dst[10];
// const char *src;
// size_t size, result, original_result;

// // Empty string
// src = "";
// size = 10;
// result = ft_strlcpy(dst, src, size);
// original_result = strlcpy(original_dst, src, size);
// printf("src=\"%s\", size=%zu => ft_dst=\"%s\", ft_return=%zu | std_dst=\"%s\", std_return=%zu\n\n",
//        src, size, dst, result, original_dst, original_result);

// // Exact fit
// src = "abcd";
// size = 5;
// result = ft_strlcpy(dst, src, size);
// original_result = strlcpy(original_dst, src, size);
// printf("src=\"%s\", size=%zu => ft_dst=\"%s\", ft_return=%zu | std_dst=\"%s\", std_return=%zu\n\n",
//        src, size, dst, result, original_dst, original_result);

// // Truncation
// src = "hello world";
// size = 5;
// result = ft_strlcpy(dst, src, size);
// original_result = strlcpy(original_dst, src, size);
// printf("src=\"%s\", size=%zu => ft_dst=\"%s\", ft_return=%zu | std_dst=\"%s\", std_return=%zu\n\n",
//        src, size, dst, result, original_dst, original_result);

// // Size is zero
// src = "nonempty";
// size = 0;
// result = ft_strlcpy(dst, src, size);
// original_result = strlcpy(original_dst, src, size);
// printf("src=\"%s\", size=%zu => ft_dst=\"%s\", ft_return=%zu | std_dst=\"%s\", std_return=%zu\n\n",
//        src, size, dst, result, original_dst, original_result);

// // Size is 1
// src = "test";
// size = 1;
// result = ft_strlcpy(dst, src, size);
// original_result = strlcpy(original_dst, src, size);
// printf("src=\"%s\", size=%zu => ft_dst=\"%s\", ft_return=%zu | std_dst=\"%s\", std_return=%zu\n\n",
//        src, size, dst, result, original_dst, original_result);

// // Large src, small buffer
// src = "abcdefghijklmnopqrstuvwxyz";
// size = 4;
// result = ft_strlcpy(dst, src, size);
// original_result = strlcpy(original_dst, src, size);
// printf("src=\"%s\", size=%zu => ft_dst=\"%s\", ft_return=%zu | std_dst=\"%s\", std_return=%zu\n\n",
//        src, size, dst, result, original_dst, original_result);

// // Embedded nulls
// src = "abc\0def";
// size = 10;
// result = ft_strlcpy(dst, src, size);
// original_result = strlcpy(original_dst, src, size);
// printf("src=\"abc\\0def\", size=%zu => ft_dst=\"%s\", ft_return=%zu | std_dst=\"%s\", std_return=%zu\n\n",
//        size, dst, result, original_dst, original_result);

// // Size larger than dst buffer
// char small_dst[5];
// char small_original_dst[5];
// src = "oversize";
// size = 100;  // larger than buffer
// result = ft_strlcpy(small_dst, src, size);
// original_result = strlcpy(small_original_dst, src, size);
// printf("src=\"%s\", size=%zu => ft_dst=\"%s\", ft_return=%zu | std_dst=\"%s\", std_return=%zu\n\n",
//        src, size, small_dst, result, small_original_dst, original_result);


// ---------------- strlcat ----------------

// printf("\n=== Testing strlcat ===\n");

// char dst[20];
// char original_dst[20];
// const char *src;
// size_t size, result, original_result;

// // Empty src
// strcpy(dst, "abc");
// strcpy(original_dst, "abc");
// src = "";
// size = 20;
// result = ft_strlcat(dst, src, size);
// original_result = strlcat(original_dst, src, size);
// printf("src=\"%s\", size=%zu => ft_dst=\"%s\", ft_return=%zu | std_dst=\"%s\", std_return=%zu\n\n",
//        src, size, dst, result, original_dst, original_result);

// // Empty dst
// strcpy(dst, "");
// strcpy(original_dst, "");
// src = "hello";
// size = 20;
// result = ft_strlcat(dst, src, size);
// original_result = strlcat(original_dst, src, size);
// printf("src=\"%s\", size=%zu => ft_dst=\"%s\", ft_return=%zu | std_dst=\"%s\", std_return=%zu\n\n",
//        src, size, dst, result, original_dst, original_result);

// // Exact fit
// strcpy(dst, "abc");
// strcpy(original_dst, "abc");
// src = "def";
// size = 7; // "abc" + "def" + '\0'
// result = ft_strlcat(dst, src, size);
// original_result = strlcat(original_dst, src, size);
// printf("src=\"%s\", size=%zu => ft_dst=\"%s\", ft_return=%zu | std_dst=\"%s\", std_return=%zu\n\n",
//        src, size, dst, result, original_dst, original_result);

// // Truncation
// strcpy(dst, "abc");
// strcpy(original_dst, "abc");
// src = "defghijklmnop";
// size = 10;
// result = ft_strlcat(dst, src, size);
// original_result = strlcat(original_dst, src, size);
// printf("src=\"%s\", size=%zu => ft_dst=\"%s\", ft_return=%zu | std_dst=\"%s\", std_return=%zu\n\n",
//        src, size, dst, result, original_dst, original_result);

// // Size is zero
// strcpy(dst, "abc");
// strcpy(original_dst, "abc");
// src = "xyz";
// size = 0;
// result = ft_strlcat(dst, src, size);
// original_result = strlcat(original_dst, src, size);
// printf("src=\"%s\", size=%zu => ft_dst=\"%s\", ft_return=%zu | std_dst=\"%s\", std_return=%zu\n\n",
//        src, size, dst, result, original_dst, original_result);

// // Size smaller than dst length
// strcpy(dst, "abcdefghij");
// strcpy(original_dst, "abcdefghij");
// src = "XYZ";
// size = 5;
// result = ft_strlcat(dst, src, size);
// original_result = strlcat(original_dst, src, size);
// printf("src=\"%s\", size=%zu => ft_dst=\"%s\", ft_return=%zu | std_dst=\"%s\", std_return=%zu\n\n",
//        src, size, dst, result, original_dst, original_result);

// // Size larger than actual buffer
// char small_dst[100] = "abc";
// char small_original_dst[100] = "abc";
// src = "oversize";
// size = 100;
// result = ft_strlcat(small_dst, src, size);
// original_result = strlcat(small_original_dst, src, size);
// printf("src=\"%s\", size=%zu => ft_dst=\"%s\", ft_return=%zu | std_dst=\"%s\", std_return=%zu\n\n",
//        src, size, small_dst, result, small_original_dst, original_result);


    
    // // ---------------- strncmp ----------------
    // // printf("\n=== Testing strncmp ===\n");

    // const char *s1;
    // const char *s2;
    // size_t n;

    // s1 = "abc"; s2 = "abc"; n = 3;
    // printf("s1=\"%s\", s2=\"%s\", n=%zu : ft_strncmp=%d : strncmp=%d\n",
    //        s1, s2, n, ft_strncmp(s1, s2, n), strncmp(s1, s2, n));

    // s1 = "abc"; s2 = "abc"; n = 5;
    // printf("s1=\"%s\", s2=\"%s\", n=%zu : ft_strncmp=%d : strncmp=%d\n",
    //        s1, s2, n, ft_strncmp(s1, s2, n), strncmp(s1, s2, n));

    // s1 = "abc"; s2 = "abd"; n = 2;
    // printf("s1=\"%s\", s2=\"%s\", n=%zu : ft_strncmp=%d : strncmp=%d\n",
    //        s1, s2, n, ft_strncmp(s1, s2, n), strncmp(s1, s2, n));

    // s1 = "abc"; s2 = "abd"; n = 3;
    // printf("s1=\"%s\", s2=\"%s\", n=%zu : ft_strncmp=%d : strncmp=%d\n",
    //        s1, s2, n, ft_strncmp(s1, s2, n), strncmp(s1, s2, n));

    // s1 = ""; s2 = " y"; n = 1;
    // printf("s1=\"%s\", s2=\"%s\", n=%zu : ft_strncmp=%d : strncmp=%d\n",
    //        s1, s2, n, ft_strncmp(s1, s2, n), strncmp(s1, s2, n));

    // s1 = ""; s2 = "abc"; n = 3;
    // printf("s1=\"%s\", s2=\"%s\", n=%zu : ft_strncmp=%d : strncmp=%d\n",
    //        s1, s2, n, ft_strncmp(s1, s2, n), strncmp(s1, s2, n));

    // s1 = "abc"; s2 = ""; n = 3;
    // printf("s1=\"%s\", s2=\"%s\", n=%zu : ft_strncmp=%d : strncmp=%d\n",
    //        s1, s2, n, ft_strncmp(s1, s2, n), strncmp(s1, s2, n));

    // s1 = "abc"; s2 = "abcd"; n = 4;
    // printf("s1=\"%s\", s2=\"%s\", n=%zu : ft_strncmp=%d : strncmp=%d\n",
    //        s1, s2, n, ft_strncmp(s1, s2, n), strncmp(s1, s2, n));

    // s1 = "abcd"; s2 = "abc"; n = 4;
    // printf("s1=\"%s\", s2=\"%s\", n=%zu : ft_strncmp=%d : strncmp=%d\n",
    //        s1, s2, n, ft_strncmp(s1, s2, n), strncmp(s1, s2, n));

    // s1 = "abc"; s2 = "xyz"; n = 0;
    // printf("s1=\"%s\", s2=\"%s\", n=%zu : ft_strncmp=%d : strncmp=%d\n",
    //        s1, s2, n, ft_strncmp(s1, s2, n), strncmp(s1, s2, n));

    // s1 = "ab\0c"; s2 = "ab\0d"; n = 4;
    // printf("s1=\"ab\\\\0c\", s2=\"ab\\\\0d\", n=%zu : ft_strncmp=%d : strncmp=%d\n",
    //        n, ft_strncmp(s1, s2, n), strncmp(s1, s2, n));

    // s1 = "ab\0c"; s2 = "ab"; n = 4;
    // printf("s1=\"ab\\\\0c\", s2=\"ab\", n=%zu : ft_strncmp=%d : strncmp=%d\n",
    //        n, ft_strncmp(s1, s2, n), strncmp(s1, s2, n));

    // s1 = "ABC"; s2 = "abc"; n = 3;
    // printf("s1=\"%s\", s2=\"%s\", n=%zu : ft_strncmp=%d : strncmp=%d\n",
    //        s1, s2, n, ft_strncmp(s1, s2, n), strncmp(s1, s2, n));

    // s1 = "abc"; s2 = "abc"; n = 100;
    // printf("s1=\"%s\", s2=\"%s\", n=%zu : ft_strncmp=%d : strncmp=%d\n",
    //        s1, s2, n, ft_strncmp(s1, s2, n), strncmp(s1, s2, n));

    // s1 = "abcdef"; s2 = "abcdeg"; n = 6;
    // printf("s1=\"%s\", s2=\"%s\", n=%zu : ft_strncmp=%d : strncmp=%d\n",
    //        s1, s2, n, ft_strncmp(s1, s2, n), strncmp(s1, s2, n));

    // s1 = "abc"; s2 = "abcdef"; n = 10;
    // printf("s1=\"%s\", s2=\"%s\", n=%zu : ft_strncmp=%d : strncmp=%d\n",
    //        s1, s2, n, ft_strncmp(s1, s2, n), strncmp(s1, s2, n));

    // s1 = "\200"; s2 = "\0"; n = 1;
    // printf("s1=\"\\\\200\", s2=\"\\\\0\", n=%zu : ft_strncmp=%d : strncmp=%d\n",
    //        n, ft_strncmp(s1, s2, n), strncmp(s1, s2, n));



    // ---------------- strnstr ----------------
    /*
    printf("\n=== Testing strnstr ===\n");

    const char *big;
    const char *little;
    size_t len;
    char *res_ft;
    char *res_std;

    // Helper to print results
    #define PRINT_RESULT(big, little, len) do { \
        res_ft  = ft_strnstr(big, little, len); \
        res_std = strnstr(big, little, len); \
        printf("big=\"%s\", little=\"%s\", len=%zu => ft=%s | std=%s\n\n", \
            big, little, len, \
            res_ft  ? res_ft  : "NULL", \
            res_std ? res_std : "NULL"); \
    } while(0)

    // 1. Exact match
    big = "Hello World"; little = "World"; len = 11;
    PRINT_RESULT(big, little, len);

    // 2. Needle cut off by len
    big = "Hello World"; little = "World"; len = 5;
    PRINT_RESULT(big, little, len);

    // 3. Empty needle (should return big)
    big = "Hello"; little = ""; len = 5;
    PRINT_RESULT(big, little, len);

    // 4. Empty haystack with non-empty needle
    big = ""; little = "Hello"; len = 5;
    PRINT_RESULT(big, little, len);

    // 5. Both empty, len = 0
    big = ""; little = ""; len = 0;
    PRINT_RESULT(big, little, len);

    // 6. Needle longer than haystack
    big = "abc"; little = "abcd"; len = 4;
    PRINT_RESULT(big, little, len);

    // 7. Match in the middle
    big = "abcabcabc"; little = "cab"; len = 9;
    PRINT_RESULT(big, little, len);

    // 8. Match exists but len too small
    big = "abcabcabc"; little = "cab"; len = 2;
    PRINT_RESULT(big, little, len);

    // 9. Overlapping matches
    big = "aaaaaa"; little = "aaa"; len = 6;
    PRINT_RESULT(big, little, len);

    // 10. Match at the very end
    big = "abcdef"; little = "def"; len = 6;
    PRINT_RESULT(big, little, len);

    // 11. Truncated before match
    big = "abcdef"; little = "def"; len = 5;
    PRINT_RESULT(big, little, len);

    // 12. No match at all
    big = "abcdef"; little = "xyz"; len = 6;
    PRINT_RESULT(big, little, len);

    #undef PRINT_RESULT
    */




    // ---------------- strchr ----------------
    /*printf("\n=== Testing strchr ===\n");

    const char *s;
    int c;
    char *res_ft;
    char *res_std;

    // Helper to print results
    #define PRINT_RESULT(s, c) do { \
        res_ft  = ft_strchr(s, c); \
        res_std = strchr(s, c); \
        if (c == '\0') \
            printf("s=\"%s\", c='\\\\0' => ft=%s | std=%s\n\n", \
                s, res_ft ? res_ft : "NULL", res_std ? res_std : "NULL"); \
        else \
            printf("s=\"%s\", c='%c' => ft=%s | std=%s\n\n", \
                s, c, res_ft ? res_ft : "NULL", res_std ? res_std : "NULL"); \
    } while(0)

    // 1. Character present in the middle
    s = "Hello World"; c = 'W';
    PRINT_RESULT(s, c);

    // 2. Character present at the beginning
    s = "Hello"; c = 'H';
    PRINT_RESULT(s, c);

    // 3. Character present at the end
    s = "Hello"; c = 'o';
    PRINT_RESULT(s, c);

    // 4. Character not present
    s = "Hello"; c = 'x';
    PRINT_RESULT(s, c);

    // 5. Empty string, search for non-null
    s = ""; c = 'a';
    PRINT_RESULT(s, c);

    // 6. Empty string, search for '\0'
    s = ""; c = '\0';
    PRINT_RESULT(s, c);

    // 7. Non-empty string, search for '\0'
    s = "Hello"; c = '\0';
    PRINT_RESULT(s, c);

    // 8. Multiple occurrences (should return first)
    s = "banana"; c = 'a';
    PRINT_RESULT(s, c);

    // 9. Non-ASCII character (UTF-8 edge case)
    // s = "héllo"; c = 'é';
    // PRINT_RESULT(s, c);

    #undef PRINT_RESULT
    */


    // ---------------- strrchr ----------------
    /*
    printf("\n=== Testing strrchr ===\n");

    const char *s;
    int c;
    char *res_ft;
    char *res_std;

    // Helper to print results
    #define PRINT_RESULT(s, c) do { \
        res_ft  = ft_strrchr(s, c); \
        res_std = strrchr(s, c); \
        if (c == '\0') \
            printf("s=\"%s\", c='\\\\0' => ft=%s | std=%s\n\n", \
                s, res_ft ? res_ft : "NULL", res_std ? res_std : "NULL"); \
        else \
            printf("s=\"%s\", c='%c' => ft=%s | std=%s\n\n", \
                s, c, res_ft ? res_ft : "NULL", res_std ? res_std : "NULL"); \
    } while(0)

    // 1. Character present in the middle
    s = "Hello World"; c = 'o';
    PRINT_RESULT(s, c);

    // 2. Character present at the beginning
    s = "Hello"; c = 'H';
    PRINT_RESULT(s, c);

    // 3. Character present at the end
    s = "Hello"; c = 'o';
    PRINT_RESULT(s, c);

    // 4. Character not present
    s = "Hello"; c = 'x';
    PRINT_RESULT(s, c);

    // 5. Empty string, search for non-null
    s = ""; c = 'a';
    PRINT_RESULT(s, c);

    // 6. Empty string, search for '\0'
    s = ""; c = '\0';
    PRINT_RESULT(s, c);

    // 7. Non-empty string, search for '\0'
    s = "Hello"; c = '\0';
    PRINT_RESULT(s, c);

    // 8. Multiple occurrences (should return last)
    s = "banana"; c = 'a';
    PRINT_RESULT(s, c);

    // 9. Non-ASCII character (UTF-8 edge case)
    // s = "héllo"; c = 'é';
    // PRINT_RESULT(s, c);

    #undef PRINT_RESULT

    */



/* 
    printf("\n=== Testing memset ===\n");

    char buf1[20];
    char buf2[20];
    void *res_ft;
    void *res_std;

    // Helper to reset buffers before each test
    #define RESET_BUFFERS(init) do { \
        memset(buf1, init, sizeof(buf1)); \
        memset(buf2, init, sizeof(buf2)); \
    } while(0)

    // Helper to print results
    #define PRINT_RESULT(c, n) do { \
        res_ft  = ft_memset(buf1, c, n); \
        res_std = memset(buf2, c, n); \
        printf("c=%d, n=%zu => ft_ptr=%p | std_ptr=%p\n", c, (size_t)(n), res_ft, res_std); \
        printf("ft=["); \
        for (size_t i = 0; i < sizeof(buf1); i++) printf("%02X ", (unsigned char)buf1[i]); \
        printf("] | std=["); \
        for (size_t i = 0; i < sizeof(buf2); i++) printf("%02X ", (unsigned char)buf2[i]); \
        printf("]\n\n"); \
    } while(0)

    // 1. n = 0 (should not modify anything) — use variable to avoid GCC warning
    RESET_BUFFERS('A');
    size_t zero = 0;
    PRINT_RESULT('B', zero);

    // 2. Fill entire buffer with 'X'
    RESET_BUFFERS('A');
    PRINT_RESULT('X', sizeof(buf1));

    // 3. Fill part of buffer (first 5 bytes)
    RESET_BUFFERS('A');
    PRINT_RESULT('Z', 5);

    // 4. Fill with 0 (common for initialization)
    RESET_BUFFERS('A');
    PRINT_RESULT(0, sizeof(buf1));

    // 5. Fill with non-ASCII value (e.g., 200)
    RESET_BUFFERS('A');
    PRINT_RESULT(200, 10);

    // 6. Fill with 255 (0xFF)
    RESET_BUFFERS('A');
    PRINT_RESULT(255, 8);

    // 7. Fill with negative value (e.g., -1, should be cast to unsigned char 0xFF)
    RESET_BUFFERS('A');
    PRINT_RESULT(-1, 6);

    // 8. Fill only middle section (simulate offset pointer)
    RESET_BUFFERS('A');
    res_ft  = ft_memset(buf1 + 5, '*', 5);
    res_std = memset(buf2 + 5, '*', 5);
    printf("offset fill => ft=[");
    for (size_t i = 0; i < sizeof(buf1); i++) printf("%02X ", (unsigned char)buf1[i]);
    printf("] | std=[");
    for (size_t i = 0; i < sizeof(buf2); i++) printf("%02X ", (unsigned char)buf2[i]);
    printf("]\n\n"); */




    // ---------------- bzero ----------------
    
   /*  printf("\n=== Testing bzero ===\n");

    char buf1[20];
    char buf2[20];

    // Helper to reset buffers before each test
    #define RESET_BUFFERS(init) do { \
        memset(buf1, init, sizeof(buf1)); \
        memset(buf2, init, sizeof(buf2)); \
    } while(0)

    // Helper to print results
    #define PRINT_RESULT(n) do { \
        ft_bzero(buf1, n); \
        bzero(buf2, n); \
        printf("n=%zu => ft=[", (size_t)(n)); \
        for (size_t i = 0; i < sizeof(buf1); i++) printf("%02X ", (unsigned char)buf1[i]); \
        printf("] | std=["); \
        for (size_t i = 0; i < sizeof(buf2); i++) printf("%02X ", (unsigned char)buf2[i]); \
        printf("]\n\n"); \
    } while(0)

    // 1. n = 0 (should not modify anything)
    RESET_BUFFERS('A');
    size_t zero = 0;
    PRINT_RESULT(zero);

    // 2. Zero entire buffer
    RESET_BUFFERS('A');
    PRINT_RESULT(sizeof(buf1));

    // 3. Zero first 5 bytes
    RESET_BUFFERS('A');
    PRINT_RESULT(5);

    // 4. Zero middle section (simulate offset pointer)
    RESET_BUFFERS('A');
    ft_bzero(buf1 + 5, 5);
    bzero(buf2 + 5, 5);
    printf("offset fill => ft=[");
    for (size_t i = 0; i < sizeof(buf1); i++) printf("%02X ", (unsigned char)buf1[i]);
    printf("] | std=[");
    for (size_t i = 0; i < sizeof(buf2); i++) printf("%02X ", (unsigned char)buf2[i]);
    printf("]\n\n"); 
    */

    
   
    // ---------------- memcpy ----------------
    /* printf("\n=== Testing memcpy ===\n");

    char buf1[20];
    char buf2[20];
    char ref1[20];
    char ref2[20];

    #define RESET_BUFFERS(init) do { \
        memset(buf1, init, sizeof(buf1)); \
        memset(buf2, init, sizeof(buf2)); \
        memset(ref1, init, sizeof(ref1)); \
        memset(ref2, init, sizeof(ref2)); \
    } while(0)

    #define PRINT_MEMCPY(n, dest_off, src_off, desc) do { \
        ft_memcpy(buf1 + (dest_off), buf2 + (src_off), (n)); \
        memcpy(ref1 + (dest_off), ref2 + (src_off), (n)); \
        int same = memcmp(buf1, ref1, sizeof(buf1)) == 0; \
        printf("%s: %s\n", desc, same ? "PASS" : "FAIL"); \
    } while(0)

    // 1. n = 0 (no change expected)
    RESET_BUFFERS('A');
    PRINT_MEMCPY(0, 0, 0, "n=0");

    // 2. Copy 5 bytes from middle of src into start of dest
    RESET_BUFFERS('B');
    PRINT_MEMCPY(5, 0, 10, "Copy 5 bytes");

    // 3. Copy full buffer
    RESET_BUFFERS('C');
    PRINT_MEMCPY(sizeof(buf1), 0, 0, "Full buffer");

    // 4. dest == src (legal, no-op) -> only test ft_memcpy
    RESET_BUFFERS('D');
    ft_memcpy(buf1, buf1, 10);
    printf("dest==src: PASS (ft_memcpy ran without error)\n"); */




    // ---------------- memmove ----------------
 /*    printf("\n=== Testing memmove ===\n");

    char m1[20];
    char r1[20];

    #define RESET_MOVEBUFFERS(init) do { \
        memset(m1, init, sizeof(m1)); \
        memset(r1, init, sizeof(r1)); \
    } while(0)

    #define PRINT_MEMMOVE(n, dest_off, src_off, desc) do { \
        ft_memmove(m1 + (dest_off), m1 + (src_off), (n)); \
        memmove(r1 + (dest_off), r1 + (src_off), (n)); \
        int same = memcmp(m1, r1, sizeof(m1)) == 0; \
        printf("%s: %s\n", desc, same ? "PASS" : "FAIL"); \
    } while(0)

    // 1. n = 0
    RESET_MOVEBUFFERS('A');
    PRINT_MEMMOVE(0, 0, 0, "n=0");

    // 2. Non-overlapping copy
    RESET_MOVEBUFFERS('B');
    PRINT_MEMMOVE(5, 0, 10, "Non-overlapping copy");

    // 3. Overlap: dest < src
    RESET_MOVEBUFFERS('C');
    PRINT_MEMMOVE(5, 0, 2, "Overlap (dest < src)");

    // 4. Overlap: dest > src
    RESET_MOVEBUFFERS('D');
    PRINT_MEMMOVE(5, 2, 0, "Overlap (dest > src)");

    // 5. Full buffer move
    RESET_MOVEBUFFERS('E');
    PRINT_MEMMOVE(sizeof(m1), 0, 0, "Full buffer move"); */



     // ---------------- memchr ----------------
    /* printf("\n=== Testing memchr ===\n");

    const char data[] = "Hello\0World\0Again";
    size_t len = sizeof(data);

    #define PRINT_MEMCHR(c, n) do { \
        void *ft_result = ft_memchr(data, (c), (n)); \
        void *std_result = memchr(data, (c), (n)); \
        printf("c='%c' (%d), n=%zu =>\n", (c), (c), (size_t)(n)); \
        printf("  ft  = %s\n", ft_result ? "FOUND" : "NULL"); \
        printf("  std = %s\n\n", std_result ? "FOUND" : "NULL"); \
    } while(0)

    // 1. Find 'H' at start
    PRINT_MEMCHR('H', len);

    // 2. Find 'W' in middle
    PRINT_MEMCHR('W', len);

    // 3. Find 'n' at end
    PRINT_MEMCHR('n', len);

    // 4. Find 'X' (not present)
    PRINT_MEMCHR('X', len);

    // 5. Find null byte
    PRINT_MEMCHR('\0', len);

    // 6. Zero-length search
    PRINT_MEMCHR('o', 0);
    */



    // ---------------- ft_memcmp ----------------
    /* printf("\n=== Testing ft_memcmp ===\n");

        const char a[] = "Hello\0World\0Again";
        const char b[] = "Hello\0World\0Again";
        const char c[] = "Hxllo\0World\0Again";
        const char d[] = "Hello\0Wxrld\0Again";
        const char e[] = "Hello\0World\0AgaiN";
        const char f[] = "HELLO\0WORLD\0AGAIN";

        #define PRINT_MEMCMP(s1, s2, n, desc) do { \
            int ft_result = ft_memcmp((s1), (s2), (n)); \
            int std_result = memcmp((s1), (s2), (n)); \
            int match = (ft_result == std_result) || ((ft_result < 0) == (std_result < 0) && (ft_result > 0) == (std_result > 0)); \
            printf("%s: %s\n", desc, match ? "PASS" : "FAIL"); \
        } while(0)

        // 1. Identical buffers
        PRINT_MEMCMP(a, b, sizeof(a), "Identical buffers");

        // 2. Mismatch at byte 1
        PRINT_MEMCMP(a, c, sizeof(a), "Mismatch at byte 1");

        // 3. Mismatch in middle
        PRINT_MEMCMP(a, d, sizeof(a), "Mismatch in middle");

        // 4. Mismatch at last byte
        PRINT_MEMCMP(a, e, sizeof(a), "Mismatch at last byte");

        // 5. Completely different case
        PRINT_MEMCMP(a, f, sizeof(a), "Different case");

        // 6. n = 0
        PRINT_MEMCMP(a, f, 0, "Zero-length comparison");

        // 7. Partial match (first 5 bytes)
        PRINT_MEMCMP(a, c, 5, "Partial match (first 5)");

        // 8. Embedded nulls
        PRINT_MEMCMP(a, b, 12, "Match through embedded nulls");
 */

    //------------------------ft_substr--------------
   /*  printf("\n=== Testing ft_substr ===\n");

    #define PRINT_SUBSTR(s, start, len, expected, desc)do { \
        char *ft_result = ft_substr((s), (start), (len)); \
        int match = ft_result && strcmp(ft_result, (expected)) == 0; \
        printf("%s: %s\n", desc, match ? "PASS" : "FAIL"); \
        if (!match) printf(" Expected: \"%s\", Got: \"%s\"\n", (expected), ft_result ? ft_result : "NULL"); \
        free(ft_result); \
    }while (0)

    // 1. Normal substring
    PRINT_SUBSTR("Hello World", 6, 5, "World", "Extract 'World'");
    // 2. Start beyond string length
    PRINT_SUBSTR("Hello", 10, 3, "", "Start beyond string length");

    // 3. Length exceeds string end
    PRINT_SUBSTR("Hello", 3, 10, "lo", "Length exceeds string end");

    // 4. Zero length
    PRINT_SUBSTR("Hello", 2, 0, "", "Zero length");

    // 5. Empty string input
    PRINT_SUBSTR("", 0, 5, "", "Empty string input");

    // 6. Full string
    PRINT_SUBSTR("Test", 0, 4, "Test", "Full string");
 */


    // ------------------------ ft_strjoin ----------------
   /*  printf("\n=== Testing ft_strjoin ===\n");

    #define PRINT_STRJOIN(s1, s2, expected, desc) do { \
        char *ft_result = ft_strjoin((s1), (s2)); \
        int match; \
        if (expected == NULL && ft_result == NULL) { \
            match = 1; \
        } else if (expected != NULL && ft_result != NULL && strcmp(ft_result, expected) == 0) { \
            match = 1; \
        } else { \
            match = 0; \
        } \
        printf("%s: %s\n", desc, match ? "PASS" : "FAIL"); \
        if (!match) printf("  Expected: \"%s\", Got: \"%s\"\n", \
                        expected ? expected : "NULL", \
                        ft_result ? ft_result : "NULL"); \
        free(ft_result); \
    } while (0)


    // 1. Normal join
    PRINT_STRJOIN("Hello", "World", "HelloWorld", "Join two normal strings");

    // 2. First string empty
    PRINT_STRJOIN("", "World", "World", "First string empty");

    // 3. Second string empty
    PRINT_STRJOIN("Hello", "", "Hello", "Second string empty");

    // 4. Both strings empty
    PRINT_STRJOIN("", "", "", "Both strings empty");

    // 5. First string NULL
    PRINT_STRJOIN(NULL, "World", "World", "First string NULL (treated as empty)");

    // 6. Second string NULL
    PRINT_STRJOIN("Hello", NULL, "Hello", "Second string NULL (treated as empty)");

    // 7. Both strings NULL
    PRINT_STRJOIN(NULL, NULL, NULL, "Both strings NULL → expect NULL");

    // 8. Strings with spaces
    PRINT_STRJOIN("Hello ", "World", "Hello World", "Join with space in first string");

    // 9. Strings with special characters
    PRINT_STRJOIN("123", "!@#", "123!@#", "Join with special characters");

    // 10. Longer strings
    PRINT_STRJOIN("This is a long string ", "joined with another long string",
                  "This is a long string joined with another long string",
                  "Join two longer strings"); */


     
    
    
    // ------------------------ ft_strtrim----------------

    /* #define PRINT_STRTRIM(s1, set, expected, desc) do { \
        char *ft_result = ft_strtrim((s1), (set)); \
        int match = 0; \
        if (expected == NULL && ft_result == NULL) { \
            match = 1; \
        } else if (expected != NULL && ft_result != NULL) { \
            if (strcmp(ft_result, expected) == 0) \
                match = 1; \
        } \
        printf("%s: %s\n", desc, match ? "PASS" : "FAIL"); \
        if (!match) printf("  Expected: \"%s\", Got: \"%s\"\n", \
                            expected ? expected : "NULL", \
                            ft_result ? ft_result : "NULL"); \
        free(ft_result); \
    } while (0)


    printf("\n=== Testing ft_strtrim ===\n");

    // 1. Trim spaces from both ends
    PRINT_STRTRIM("  Hello World  ", " ", "Hello World", "Trim spaces from both ends");

    // 2. Trim 'x' from both ends
    PRINT_STRTRIM("xx42Viennaxx", "x", "42Vienna", "Trim 'x' from both ends");

    // 3. Empty set — no trimming
    PRINT_STRTRIM("42Vienna", "", "42Vienna", "Empty set — no trimming");

    // 4. Empty string input
    PRINT_STRTRIM("", " ", "", "Empty string input");

    // 5. Only set characters — should return empty string
    PRINT_STRTRIM("     ", " ", "", "Only set characters");

    // 6. All characters in set — should return empty string
    PRINT_STRTRIM("abc", "abc", "", "All characters in set");

    // 7. No characters in set — should return original string
    PRINT_STRTRIM("abc", "xyz", "abc", "No characters in set");

    // 8. Internal spaces preserved
    PRINT_STRTRIM("  Hello  World  ", " ", "Hello  World", "Trim spaces — internal preserved");

    // 9. Trim whitespace characters
    PRINT_STRTRIM("  \t\nHello\t\n  ", " \t\n", "Hello", "Trim whitespace characters"); 
    
    */



    // ------------------------ ft_calloc ----------------

    /* #define PRINT_CALLOC(nmemb, size, expect_null, desc) do { \
        void *ft_result = ft_calloc((nmemb), (size)); \
        int match = 0; \
        if (expect_null) { \
            if (ft_result == NULL) \
                match = 1; \
        } else { \
            if (ft_result != NULL) { \
                size_t total = (nmemb) * (size); \
                unsigned char *bytes = (unsigned char *)ft_result; \
                int all_zero = 1; \
                for (size_t i = 0; i < total; i++) { \
                    if (bytes[i] != 0) { all_zero = 0; break; } \
                } \
                if (all_zero) \
                    match = 1; \
            } \
        } \
        printf("%s: %s\n", desc, match ? "PASS" : "FAIL"); \
        if (!match) { \
            printf("  Expected: %s, Got: %s\n", \
                expect_null ? "NULL" : "non-NULL zeroed block", \
                ft_result ? "non-NULL" : "NULL"); \
        } \
        free(ft_result); \
    } while (0)

    printf("\n=== Testing ft_calloc ===\n");

    // 1. Zero nmemb
    PRINT_CALLOC(0, sizeof(int), 0, "Zero nmemb (malloc(0) allowed)");

    // 2. Zero size
    PRINT_CALLOC(10, 0, 0, "Zero size (malloc(0) allowed)");

    // 3. Overflow case
    PRINT_CALLOC(SIZE_MAX, 2, 1, "Overflow should return NULL");

    // 4. Small normal allocation
    PRINT_CALLOC(5, sizeof(int), 0, "Small allocation, should be zeroed");

    // 5. Large allocation (may fail depending on system, but not overflow)
    PRINT_CALLOC(1000000, sizeof(int), 0, "Large allocation (system-dependent)"); 
    
    */



    // ------------------------ ft_strdup----------------
    /* #define PRINT_STRDUP(input, desc) do { \
        char *ft_result = ft_strdup(input); \
        char *std_result = strdup(input); \
        int match = 0; \
        if (!ft_result || !std_result) { \
            match = (ft_result == NULL && std_result == NULL); \
        } else { \
            match = (strcmp(ft_result, std_result) == 0); \
        } \
        printf("%s: %s\n", desc, match ? "PASS" : "FAIL"); \
        if (!match) { \
            printf("  Input: \"%s\"\n", input); \
            printf("  Expected: \"%s\"\n", std_result ? std_result : "NULL"); \
            printf("  Got: \"%s\"\n", ft_result ? ft_result : "NULL"); \
        } \
        free(ft_result); \
        free(std_result); \
    } while (0)
    

    printf("\n=== Testing ft_strdup ===\n");

    // 1. Empty string
    PRINT_STRDUP("", "Empty string");

    // 2. Short string
    PRINT_STRDUP("Hello", "Short string");

    // 3. Long string
    PRINT_STRDUP("This is a long string used to test ft_strdup against strdup for correctness.", "Long string");

    // 4. String with embedded nulls (manual comparison only)
    char embedded[] = {'A', 'B', '\0', 'C', 'D', '\0'};
    PRINT_STRDUP(embedded, "Embedded nulls (partial copy)");

    // 5. String with special characters
    PRINT_STRDUP("!@#$%^&*()_+-=[]{}|;':\",.<>/?", "Special characters");

    // 6. String with whitespace
    PRINT_STRDUP("   \t\n  Hello World  \n", "Whitespace string");

    // 7. Very large string (system-dependent)
    char *large = malloc(1000000);
    if (large) {
        memset(large, 'A', 999999);
        large[999999] = '\0';
        PRINT_STRDUP(large, "Very large string");
        free(large);
    } */



    // ------------------------ ft_split ----------------

    printf("\n=== Testing ft_split ===\n");

    #define PRINT_SPLIT(input, delim, desc) do { \
        char **result = ft_split((input), (delim)); \
        printf("%s:\n", desc); \
        if (!result) { \
            printf("  Result: NULL\n"); \
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
        } \
        printf("\n"); \
    } while (0)


    // 1. Empty string
    PRINT_SPLIT("", ',', "Empty string");

    // 2. No delimiter present
    PRINT_SPLIT("hello", ',', "No delimiter present");

    // 3. Only delimiters
    PRINT_SPLIT(",,,", ',', "Only delimiters");

    // 4. Leading and trailing delimiters
    PRINT_SPLIT(",hello,world,", ',', "Leading and trailing delimiters");

    // 5. Consecutive delimiters
    PRINT_SPLIT("a,,b,,,c", ',', "Consecutive delimiters");

    // 6. Single word
    PRINT_SPLIT("word", ',', "Single word");

    // 7. Delimiter is space
    PRINT_SPLIT("split this string", ' ', "Space as delimiter");

    // 8. Delimiter is null character (undefined behavior)
    PRINT_SPLIT("abc", '\0', "Null delimiter (edge case)");

    // 9. Long input
    PRINT_SPLIT("this,is,a,very,long,string,with,many,commas,to,test,split", ',', "Long input");

    // 10. String with embedded whitespace
    PRINT_SPLIT("  a b  c   d ", ' ', "Whitespace with uneven spacing"); 
    
   

    

    // ------------------------ ft_itoa ----------------

     /* printf("\n=== Testing ft_itoa ===\n");

    #define PRINT_ITOA(input, desc) do { \
        char *result = ft_itoa((input)); \
        printf("%s:\n", desc); \
        if (!result) { \
            printf("  Result: NULL\n"); \
        } else { \
            printf("  Input: %d\n", (input)); \
            printf("  Output: \"%s\"\n", result); \
            free(result); \
        } \
        printf("\n"); \
    } while (0)

    // 1. Zero
    PRINT_ITOA(0, "Zero");

    // 2. Positive single digit
    PRINT_ITOA(7, "Positive single digit");

    // 3. Negative single digit
    PRINT_ITOA(-3, "Negative single digit");

    // 4. Positive multi-digit
    PRINT_ITOA(12345, "Positive multi-digit");

    // 5. Negative multi-digit
    PRINT_ITOA(-98765, "Negative multi-digit");

    // 6. INT_MAX
    PRINT_ITOA(INT_MAX, "INT_MAX");

    // 7. INT_MIN
    PRINT_ITOA(INT_MIN, "INT_MIN");

    // 8. Leading zero test (not applicable to int input, but good for visual confirmation)
    PRINT_ITOA(1000, "Positive with trailing zeros");

    // 9. Edge case: -1
    PRINT_ITOA(-1, "Negative one");

    // 10. Edge case: 1
    PRINT_ITOA(1, "Positive one");
  */





    // ------------------------ ft_strmapi ----------------

    /*
    printf("\n=== Testing ft_strmapi ===\n");

    #define PRINT_STRMAPI(input, func, desc) do { \
        char *result = ft_strmapi((input), (func)); \
        printf("%s:\n", desc); \
        if (!result) { \
            printf("  Result: NULL\n"); \
        } else { \
            printf("  Input: \"%s\"\n", (input) ? (input) : "NULL"); \
            printf("  Output: \"%s\"\n", result); \
            free(result); \
        } \
        printf("\n"); \
    } while (0)

    // 1. Empty string
    PRINT_STRMAPI("", to_upper, "Empty string");

    // 2. Single character
    PRINT_STRMAPI("a", to_upper, "Single lowercase character");

    // 3. Mixed case string
    PRINT_STRMAPI("HeLLo", to_upper, "Mixed case string");

    // 4. String with spaces
    PRINT_STRMAPI("hello world", to_upper, "String with spaces");

    // 5. String with punctuation
    PRINT_STRMAPI("42!libft?", to_upper, "String with punctuation");

    // 6. Using index-based shifting
    PRINT_STRMAPI("abcdef", shift_char, "Shift characters by index");

    // 7. Identity function (no change)
    PRINT_STRMAPI("unchanged", identity, "Identity function");

    // 8. NULL input string
    PRINT_STRMAPI(NULL, to_upper, "NULL input string");

    // 9. Long string
    PRINT_STRMAPI("abcdefghijklmnopqrstuvwxyz", to_upper, "Long alphabet string");

    // 10. String with non-ASCII chars
    PRINT_STRMAPI("héllo", to_upper, "String with extended ASCII"); 
    */






     // ------------------------ ft_striteri ----------------

    // === Testing ft_striteri ===
    /* #define RUN_TEST(desc, str, func) do { \
        char buffer[256]; \
        snprintf(buffer, sizeof(buffer), "%s", str); \
        printf("%s:\n", desc); \
        printf("  Before: \"%s\"\n", buffer); \
        ft_striteri(buffer, func); \
        printf("  After:  \"%s\"\n\n", buffer); \
    } while (0)


    printf("=== ft_striteri Edge Case Tests ===\n\n");

    // 1. Empty string
    RUN_TEST("Empty string", "", to_upper_even);

    // 2. Single character
    RUN_TEST("Single lowercase char", "a", to_upper_even);

    // 3. Mixed case string
    RUN_TEST("Mixed case string", "HeLLo", to_upper_even);

    // 4. String with spaces
    RUN_TEST("String with spaces", "hello world", to_upper_even);

    // 5. String with punctuation
    RUN_TEST("String with punctuation", "42!libft?", to_upper_even);

    // 6. Apply vowel masking
    RUN_TEST("Mask vowels", "Hello World", mask_vowels);

    // 7. Apply index-based shifting
    RUN_TEST("Shift by index", "abcdef", shift_by_index);

    // 8. Identity function (no change)
    RUN_TEST("Identity function", "unchanged", identity1);

    // 9. Long string (stress test)
    RUN_TEST("Long alphabet string", "abcdefghijklmnopqrstuvwxyz", to_upper_even);

    // 10. Extended ASCII / UTF-8 characters
    RUN_TEST("Extended ASCII", "héllo", to_upper_even);

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
    */




     // ------------------------ ft_putchar_fd ----------------

  /*   printf("=== ft_putchar_fd Edge Case Tests ===\n\n");

    #define RUN_PUTCHAR_TEST(desc, c, fd) do { \
        printf("%s:\n", desc); \
        printf("  Writing '%c' to fd=%d\n", c, fd); \
        ft_putchar_fd(c, fd); \
        ft_putchar_fd('\n', 1); \
    } while (0)

    // 1. Standard output
    RUN_PUTCHAR_TEST("Write to stdout", 'A', 1);

    // 2. Standard error
    RUN_PUTCHAR_TEST("Write to stderr", 'B', 2);

    // 3. File output
    int fd = open("test_putchar_fd.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);
    if (fd != -1) {
        RUN_PUTCHAR_TEST("Write to file", 'C', fd);
        close(fd);
        printf("  (Check test_putchar_fd.txt for 'C')\n");
    }

    // 4. Invalid descriptor
    RUN_PUTCHAR_TEST("Invalid fd (-1)", 'D', -1);

    // 5. Special characters
    RUN_PUTCHAR_TEST("Newline char", '\n', 1);
    RUN_PUTCHAR_TEST("Tab char", '\t', 1); 
    */




    // ------------------------ ft_putstr_fd ----------------

    /* printf("=== PUTSTR Edge Case Tests ===\n\n");

    #define RUN_PUTSTR_TEST(desc, str, fd) do { \
        printf("%s:\n", desc); \
        printf("  Input string: %s\n", (str) ? str : "NULL"); \
        printf("  Target fd: %d\n", fd); \
        ft_putstr_fd(str, fd); \
        ft_putchar_fd('\n', 1);\
        printf("\n"); \
    } while (0)

    // 1. Normal string to stdout
    RUN_PUTSTR_TEST("Write to stdout", "Hello, world!", 1);

    // 2. Normal string to stderr
    RUN_PUTSTR_TEST("Write to stderr", "Error message", 2);

    // 3. Empty string
    RUN_PUTSTR_TEST("Empty string", "", 1);

    // 4. NULL string
    RUN_PUTSTR_TEST("NULL string", NULL, 1);

    // 5. Invalid file descriptor
    RUN_PUTSTR_TEST("Invalid fd (-1)", "Should not crash", -1);

    // 6. Special characters
    RUN_PUTSTR_TEST("Special characters", "Line1\nLine2\tTabbed", 1);

    // 7. Write to a file
    int fd = open("test_putstr_fd.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);
    if (fd != -1) {
        RUN_PUTSTR_TEST("Write to file", "File output test", fd);
        close(fd);
        printf("  (Check test_putstr_fd.txt for output)\n\n");
    } else {
        perror("open");
    } */




    // ------------------------ ft_putnbr_fd ----------------

   /*   printf("=== PUTNBR Edge Case Tests ===\n\n");
 
    #define RUN_PUTNBR_TEST(desc, n, fd) do { \
        printf("%s:\n", desc); \
        printf("  Input number: %ld\n", (long)n); \
        printf("  Target fd: %d\n", fd); \
        ft_putnbr_fd(n, fd); \
        ft_putchar_fd('\n', 1);  \
        printf("\n"); \
    } while (0)


    printf("=== ft_putnbr_fd Edge Case Tests ===\n\n");

    // 1. Zero
    RUN_PUTNBR_TEST("Zero", 0, 1);

    // 2. Positive number
    RUN_PUTNBR_TEST("Positive number", 12345, 1);

    // 3. Negative number
    RUN_PUTNBR_TEST("Negative number", -98765, 1);

    // 4. INT_MAX
    RUN_PUTNBR_TEST("INT_MAX", 2147483647, 1);

    // 5. INT_MIN
    RUN_PUTNBR_TEST("INT_MIN", -2147483648, 1);

    // 6. Write to stderr
    RUN_PUTNBR_TEST("Write to stderr", 42, 2);

    // 7. Invalid file descriptor
    RUN_PUTNBR_TEST("Invalid fd (-1)", 2025, -1);

    // 8. Write to a file
    int fd = open("test_putnbr_fd.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);
    if (fd != -1) {
        RUN_PUTNBR_TEST("Write to file", 123456789, fd);
        close(fd);
        printf("  (Check test_putnbr_fd.txt for output)\n\n");
    } else {
        perror("open");
    } */




	return (0);
}