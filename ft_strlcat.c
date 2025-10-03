int ft_strlcat(char *dst, const char *src, unsigned int size)
{
    unsigned int i;
    unsigned int src_len;
    unsigned int dst_len;

    dst_len = 0;
    src_len = 0;
    while (dst_len < size && dst[dst_len])
        dst_len++;
    while (src[src_len])
        src_len++;
    if (dst_len == size)
        return (dst_len + src_len);   
    i = 0;  
    while (i  < (size - dst_len - 1) && src[i])
    {
        dst[dst_len + i] = src[i];
        i++;
    }
    if (dst_len + i < size)
        dst[dst_len + i] = '\0';
    return (dst_len + src_len);  
}