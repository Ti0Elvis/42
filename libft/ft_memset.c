#include "libft.h"

void *ft_memset(void *buffer, int c, size_t n)
{
    size_t i;
    unsigned char *temp;
    
    if (!buffer || n == 0)
    {
        return (buffer);
    }
    i = 0;
    temp = (unsigned char *)buffer;
    while (i < n)
    {
        temp[i] = (unsigned char)c;
        i++;
    }
    return (buffer);
}