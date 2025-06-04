#include "libft.h"

void ft_bzero(void *buffer, size_t n)
{
    if (!buffer || n == 0)
    {
        return;
    }
    ft_memset(buffer, 0, n);
}