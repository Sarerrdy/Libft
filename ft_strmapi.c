#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t		len;
	char	*newstr;
	size_t		i;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	newstr = malloc(sizeof(char) * (len + 1));
	if (!newstr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		newstr[i] = f(i, s[i]);
		i++;
	}
    newstr[i] = '\0';
    return (newstr);
}
