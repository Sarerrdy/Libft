#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include "libft.h"

#include <bsd/string.h>

char	*ft_strrchr(const char *s, int c);

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




	return (0);
}