#include "libft.h"

char	*ft_itoa(int n)
{
	char	*nbrstr;
	int		len;
	long	num;

	num = n;
	len = ft_int_len(n);
	nbrstr = malloc(sizeof(char) * (len + 1));
	if (!nbrstr)
		return (NULL);
	nbrstr[len] = '\0';
	if (num == 0)
		nbrstr[0] = '0';
	if (num < 0)
	{
		nbrstr[0] = '-';
		num = -num;
	}
	while (num)
	{
		nbrstr[--len] = num % 10 + '0';
		num = num / 10;
	}
	return (nbrstr);
}
