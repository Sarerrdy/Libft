#include <ctype.h>
#include <stdio.h>
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

int ft_strlcpy(char *dst, const char *src, int size);

printf("\n=== Testing strlcpy ===\n");

char dst[10];
char original_dst[10];
const char *src;
size_t size, result, original_result;

// Empty string
src = "";
size = 10;
result = ft_strlcpy(dst, src, size);
original_result = strlcpy(original_dst, src, size);
printf("src=\"%s\", size=%zu => ft_dst=\"%s\", ft_return=%zu | std_dst=\"%s\", std_return=%zu\n\n",
       src, size, dst, result, original_dst, original_result);

// Exact fit
src = "abcd";
size = 5;
result = ft_strlcpy(dst, src, size);
original_result = strlcpy(original_dst, src, size);
printf("src=\"%s\", size=%zu => ft_dst=\"%s\", ft_return=%zu | std_dst=\"%s\", std_return=%zu\n\n",
       src, size, dst, result, original_dst, original_result);

// Truncation
src = "hello world";
size = 5;
result = ft_strlcpy(dst, src, size);
original_result = strlcpy(original_dst, src, size);
printf("src=\"%s\", size=%zu => ft_dst=\"%s\", ft_return=%zu | std_dst=\"%s\", std_return=%zu\n\n",
       src, size, dst, result, original_dst, original_result);

// Size is zero
src = "nonempty";
size = 0;
result = ft_strlcpy(dst, src, size);
original_result = strlcpy(original_dst, src, size);
printf("src=\"%s\", size=%zu => ft_dst=\"%s\", ft_return=%zu | std_dst=\"%s\", std_return=%zu\n\n",
       src, size, dst, result, original_dst, original_result);

// Size is 1
src = "test";
size = 1;
result = ft_strlcpy(dst, src, size);
original_result = strlcpy(original_dst, src, size);
printf("src=\"%s\", size=%zu => ft_dst=\"%s\", ft_return=%zu | std_dst=\"%s\", std_return=%zu\n\n",
       src, size, dst, result, original_dst, original_result);

// Large src, small buffer
src = "abcdefghijklmnopqrstuvwxyz";
size = 4;
result = ft_strlcpy(dst, src, size);
original_result = strlcpy(original_dst, src, size);
printf("src=\"%s\", size=%zu => ft_dst=\"%s\", ft_return=%zu | std_dst=\"%s\", std_return=%zu\n\n",
       src, size, dst, result, original_dst, original_result);

// Embedded nulls
src = "abc\0def";
size = 10;
result = ft_strlcpy(dst, src, size);
original_result = strlcpy(original_dst, src, size);
printf("src=\"abc\\0def\", size=%zu => ft_dst=\"%s\", ft_return=%zu | std_dst=\"%s\", std_return=%zu\n\n",
       size, dst, result, original_dst, original_result);

// Size larger than dst buffer
char small_dst[5];
char small_original_dst[5];
src = "oversize";
size = 100;  // larger than buffer
result = ft_strlcpy(small_dst, src, size);
original_result = strlcpy(small_original_dst, src, size);
printf("src=\"%s\", size=%zu => ft_dst=\"%s\", ft_return=%zu | std_dst=\"%s\", std_return=%zu\n\n",
       src, size, small_dst, result, small_original_dst, original_result);

	return (0);
}