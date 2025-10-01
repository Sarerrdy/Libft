int ft_strlcat(char *dst, const char *src, unsigned int size)
{
    unsigned int i;
    unsigned int j;

    i = 0;
    j = 0;
    while (dst[i])
        i++;
    if (size > 0)
    {
        while (j < size - 1 && src[j])
        {
            dst[i] = src[j];
            i++;
            j++;
        }
        dst[i] = '\0';
    }
    while ((src[j]))
    {
        i++;
        j++;
    }
    return (i);
}