#include "libft.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h> 

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
printf("\n=== Testing atoi ===\n");

const char *s;

// Empty string
s = "";
printf("ft_atoi=\"%s\" → %d, atoi → %d\n", s, ft_atoi(s), atoi(s));

// Only spaces
s = "   ";
printf("ft_atoi=\"%s\" → %d, atoi → %d\n", s, ft_atoi(s), atoi(s));

// Single digit
s = "7";
printf("ft_atoi=\"%s\" → %d, atoi → %d\n", s, ft_atoi(s), atoi(s));

// Positive number
s = "123";
printf("ft_atoi=\"%s\" → %d, atoi → %d\n", s, ft_atoi(s), atoi(s));

// Negative number
s = "-456";
printf("ft_atoi=\"%s\" → %d, atoi → %d\n", s, ft_atoi(s), atoi(s));

// Leading spaces
s = "   789";
printf("ft_atoi=\"%s\" → %d, atoi → %d\n", s, ft_atoi(s), atoi(s));

// Leading plus
s = "+42";
printf("ft_atoi=\"%s\" → %d, atoi → %d\n", s, ft_atoi(s), atoi(s));

// Mixed signs
s = "--42";
printf("ft_atoi=\"%s\" → %d, atoi → %d\n", s, ft_atoi(s), atoi(s));

s = "+-42";
printf("ft_atoi=\"%s\" → %d, atoi → %d\n", s, ft_atoi(s), atoi(s));

// Non-digit prefix
s = "abc123";
printf("ft_atoi=\"%s\" → %d, atoi → %d\n", s, ft_atoi(s), atoi(s));

// Number followed by letters
s = "123abc";
printf("ft_atoi=\"%s\" → %d, atoi → %d\n", s, ft_atoi(s), atoi(s));

// INT_MAX
s = "2147483647";
printf("ft_atoi=\"%s\" → %d, atoi → %d\n", s, ft_atoi(s), atoi(s));

// INT_MIN
s = "-2147483648";
printf("ft_atoi=\"%s\" → %d, atoi → %d\n", s, ft_atoi(s), atoi(s));

// Overflow
s = "9999999999";
printf("ft_atoi=\"%s\" → %d, atoi → %d\n", s, ft_atoi(s), atoi(s));

s = "-9999999999";
printf("ft_atoi=\"%s\" → %d, atoi → %d\n", s, ft_atoi(s), atoi(s));

	return (0);
}