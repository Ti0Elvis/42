#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t i;
    size_t src_len;

    if (!dest || !src)
    {
        return (0);
    }
    src_len = ft_strlen(src);
    if (size == 0)
    {
        return (src_len);
    }
    i = 0;
    while (src[i] != '\0' && i < size - 1)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (src_len);
}