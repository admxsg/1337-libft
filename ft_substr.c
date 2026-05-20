#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *str;
	size_t i;
	size_t t;
	if (!s)
		return (NULL);
	i = ft_strlen(s);
	if (i < start)
		return(ft_strdup(""));
	if (i - start < len)
		len = i - start ;
	str = malloc((len + 1)  * sizeof(char));
	if(!str)
		return(NULL);
	t = 0;
	while (t < len)
	{
		str[t] = s[start];
		t++;
		start++;
	}
	str[t] = '\0';
	return (str);
}
