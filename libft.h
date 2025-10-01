#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_islower(int c);
int ft_isupper(int c);
int ft_isalpha(int c);
int ft_isdigit(int c);

int ft_isascii(int c);
int ft_isprint(int c);
int ft_strlen(const char *str);
int ft_toupper(int c);
int ft_tolower(int c);
int ft_atoi(const char *nptr);

#endif