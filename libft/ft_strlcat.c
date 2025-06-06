#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t i;
    size_t src_len;
    size_t dest_len;

    if (!dest || !src)
    {
        return (0);
    }
    src_len = ft_strlen(src);
    dest_len = ft_strlen(dest);
    if (size <= dest_len)
    {
        return (size + src_len);
    }
    i = 0;
    while (src[i] != '\0' && (dest_len + i < size - 1))
    {
        dest[dest_len + i] = src[i];
        i++;
    }
    dest[dest_len + i] = '\0';
    return (dest_len + src_len);
}