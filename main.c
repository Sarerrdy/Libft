#include "libft.h"
#include <bsd/string.h>
#include <ctype.h>
#include <fcntl.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>

void	test_tolower(void);
void	test_toupper(void);
void	test_isprint(void);
void	test_isascii(void);
void	test_isdigit(void);
void	test_isalpha(void);
void	test_isalnum(void);

void	test_putnbr_fd(void);
void	test_putchar_fd(void);
void	test_putstr_fd(void);
void	test_putendl_fd(void);

void	test_striteri(void);
void	test_strmapi(void);

void	test_strlen(void);
void	test_split(void);
void	test_strtrim(void);
void	test_strjoin(void);
void	test_substr(void);
void	test_strrchr(void);
void	test_strchr(void);
void	test_strnstr(void);
void	test_strncmp(void);
void	test_strlcat(void);
void	test_strlcpy(void);
void	test_strdup(void);

void	test_atoi(void);
void	test_itoa(void);

void	test_bzero(void);
void	test_calloc(void);
void	test_memcmp(void);
void	test_memchr(void);
void	test_memmove(void);
void	test_memcpy(void);
void	test_memset(void);

int	main(void)
{
	// test_tolower();
    // printf("\n=========================================\n");
	// test_toupper();
    //  printf("\n=========================================\n");
	// test_isprint();
    //  printf("\n=========================================\n");
	// test_isascii();
    //  printf("\n=========================================\n");
	// test_isdigit();
    //  printf("\n=========================================\n");
	// test_isalpha();
    //  printf("\n=========================================\n");
	// test_isalnum();
    //  printf("\n=========================================\n");

	// test_putnbr_fd();
    //  printf("\n=========================================\n");
	// test_putchar_fd();
    //  printf("\n=========================================\n");
	// test_putstr_fd();
    //  printf("\n=========================================\n");
	// test_putendl_fd();
    //  printf("\n=========================================\n");

	// test_strlen();
    //  printf("\n=========================================\n");
	// test_split();
    //  printf("\n=========================================\n");
	// test_strdup();
    //  printf("\n=========================================\n");
	// test_strjoin();
    //  printf("\n=========================================\n");
	// test_substr();
    //  printf("\n=========================================\n");
	// test_strrchr();
    //  printf("\n=========================================\n");
	// test_strchr();
    //  printf("\n=========================================\n");
	// test_strnstr();
    //  printf("\n=========================================\n");
	// test_strncmp();
    //  printf("\n=========================================\n");
	// test_strlcat();
    //  printf("\n=========================================\n");
	// test_strlcpy();
    //  printf("\n=========================================\n");
	// test_strlen();
    //  printf("\n=========================================\n");

	// test_striteri();
    //  printf("\n=========================================\n");
	// test_strmapi();
    //  printf("\n=========================================\n");

	// test_itoa();
    //  printf("\n=========================================\n");
	test_atoi();
    //  printf("\n=========================================\n");

	// test_bzero();
    //  printf("\n=========================================\n");
	// test_calloc();
    //  printf("\n=========================================\n");
	// test_memcmp();
    //  printf("\n=========================================\n");
	// test_memchr();
    //  printf("\n=========================================\n");
	// test_memmove();
    //  printf("\n=========================================\n");
	// test_memcpy();
    //  printf("\n=========================================\n");
	// test_memset();

	return (0);
}