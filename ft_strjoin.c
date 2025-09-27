#include "libft.h"
 char *ft_strjoin(char const *s1, char const *s2)
{
	size_t s1len;
	size_t s2len;
	size_t size;
	char *str;
	int  i;
	int j;
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	size = s1len +s2len;
	str = malloc((size + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while(s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}
	
