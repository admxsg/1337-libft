#include "libft.h"

size_t ft_strlcat(char *dest , char *src , size_t sizedest)
{
	size_t dest_len;
	size_t src_len;
	size_t i;
	dest_len = ft_strlen(dest);
	src_len =  ft_strlen(src);
	if (sizedest == 0 )
		return src_len;
	if ( dest_len >= sizedest)
		return (dest_len + src_len);
	i = 0;
	while (src[i] && i < sizedest - dest_len - 1 )
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len +i ] = '\0';
	return (dest_len + src_len);
}
