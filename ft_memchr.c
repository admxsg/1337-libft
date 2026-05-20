#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	i = 0;
	const unsigned char *p;
	p = (const unsigned char *)s;
	while (i < n)
	{
		if (p[i] == (unsigned char)c)
			return ((void *)(p + 1));
		i++;
	}
	return NULL;
}
