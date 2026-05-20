#include "libft.h"

size_t ft_strlcpy(char *dest , char *src , size_t sizedest)
{

	size_t src_len;
	size_t i;
	src_len = ft_strlen(src);
	if (sizedest == 0)
		return src_len;
	i = 0;
	while (src[i] && i < sizedest - 1 )
	{
		dest[i] = src[i] ;
		i++;
	}
	dest[i] = '\0';
	return src_len;
}
