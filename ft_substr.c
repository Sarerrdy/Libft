#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *newstr;
	unsigned int i;

	newstr = malloc(sizeof(char) * len + 1);
	i = 0;
    if ()
	while (i < len)
		newstr[i++] = s[start++];
	newstr[i] = '\0';
	return (newstr);
}