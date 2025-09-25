#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *d = dest;
    const char *s = src;
    size_t i;
    i = 0;
    while ( i < n)
    {
        d[i] = ((unsigned char *)s)[i];
        i++;
    }
    return (dest);
}