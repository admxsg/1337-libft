#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
	size_t t;
	unsigned char *str;
	size_t i;
	t = nmemb * size;
	if (nmemb == 0 || size == 0)
		t = 1;
	str = malloc(t);
	if (!str)
		return (NULL);
	i = 0;
	while(i < t)
	{
		str[i] = 0;
		i++;
	}
	return((void *)str);
}
