#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	ln;
	int		len;
	char	nstr[ft_int_len(n) + 1];

	len = ft_int_len(n);
	ln = n;
	nstr[len] = '\0';
	if (ln == 0)
	{
		ft_putchar_fd('0', fd);
		return ;
	}
	if (ln < 0)
	{
		nstr[0] = '-';
		ln = -ln;
	}
	while (ln)
	{
		nstr[--len] = ln % 10 + '0';
		ln = ln / 10;
	}
	ft_putstr_fd(nstr, fd);
}
