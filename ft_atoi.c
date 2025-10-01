#include "libft.h"

int ft_atoi(const char *nptr)
{
    int i;
    int num;
    int sign;

    sign = 1;
    i = 0;
    while (nptr[i] && (nptr[i] == ' ' || (nptr[i] >= '\t' && nptr[i] <= '\r')))
    {
        i++;
    }
    if (nptr[i] == '+' || nptr[i] == '-')
    {
        if (nptr[i] == '-')
            sign = -1;
        i++;
    }
    num = 0;
    while (nptr[i] && ft_isdigit(nptr[i]))
    {
        num = num * 10 + (nptr[i] - '0');
        i++;
    }
    return (num * sign);    
}