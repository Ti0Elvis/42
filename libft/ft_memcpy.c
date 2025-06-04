#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;
    unsigned char *buffer_dest;
    const unsigned char *buffer_src;
    
    if (!dest || !src || n == 0)
    {
        return;
    }
    i = 0;
    buffer_dest = (unsigned char *)dest;
    buffer_src = (const unsigned char *)src;
    while (i < n)
    {
        buffer_dest[i] = buffer_src[i];
        i++;
    }
    return (dest);
}