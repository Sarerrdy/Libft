#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *dptr;
	const unsigned char *sptr;

	dptr = (unsigned char *)dest;
	sptr = (const unsigned char *)src;
	while (n--)
	{
		*dptr = *sptr;
		dptr++;
		sptr++;
	}
	return (dest);
}