#include "libft.h"

char *ft_substr(char const *s, unsigned int start,size_t len)
{
	char *substr;
	size_t ilen;
	size_t size;
	size = ft_strlen(s);
	if (size < start)
		return (ft_strdup(""));
	if (len > size - start)
		len = size - start;
	substr = malloc((len + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	ilen = 0;
	while (ilen < len)
	{
		substr[ilen]= s[start];
		ilen++;
		start++;
	}
	substr[ilen] = '\0';
	return (substr);
}
