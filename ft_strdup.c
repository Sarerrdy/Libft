#include "libft.h"

char *ft_strdup(const char *s)
{
    char *newstr;
    char *dup;

    newstr = malloc(sizeof(char) * (ft_strlen(s) + 1));
    dup = newstr;
    if (!newstr)
        return (NULL);
    while (*s)
    {
        *newstr++ = *s++;
    }
    *newstr = '\0';
    return (dup);    
}
