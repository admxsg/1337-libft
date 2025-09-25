#include "libft.h"

void *ft_memchr(void *s, int c, size_t n)
{
   unsigned char *p = s;
   size_t i;
   i = 0;
   while (i < n)
   {
        if (p[i] == (unsigned char )c)
            return ((void *)&p[i]);
        i++;
   }
   return (NULL);
}