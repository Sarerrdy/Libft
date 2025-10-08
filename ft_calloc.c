#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
    unsigned char *ptr;

    if(nmemb == 0 || size == 0)
        return (malloc(0));
    if ( nmemb > SIZE_MAX / size)
        return (NULL);
    ptr = malloc(nmemb * size);
    if (!ptr)
        return(NULL);
    ft_bzero(ptr, nmemb * size);
    return (ptr);
}