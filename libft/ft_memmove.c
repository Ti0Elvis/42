#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;
    unsigned char *buffer_dest;
    const unsigned char *buffer_src;

    if (!dest || !src || n == 0)
    {
        return (dest);
    }
    i = 0;
    buffer_dest = (unsigned char *)dest;
    buffer_src = (const unsigned char *)src;
    while (i < n)
    {
        if (buffer_dest < buffer_src)
        {
            buffer_dest[i] = buffer_src[i];
        }
        else
        {
            buffer_dest[n - 1 - i] = buffer_src[n - 1 - i];
        }
        i++;
    }
    return (dest);
}