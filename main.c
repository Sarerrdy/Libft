#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

#include <bsd/string.h>

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



	return (0);
}