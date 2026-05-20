#include "libft.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	 *str;
	size_t		 t;
	
	t = nmemb * size;
	if (nmemb ==  0 || size == 0 )
		t = 1;
	str = malloc(t);
	if (!str)
		return(NULL);
	ft_bzero(str,t);
       	return ((void*) str);
}       
