#include "libft.h"
int count_word(char const *str, char c)
{
	size_t i;
	size_t wd;
	i = 0;
	wd = 0;
	while(str[i])
	{
		while (str[i] == c)
			 i++;
		if (str[i] != '\0')
			wd++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (wd);
}

char **ft_split(char const *s, char c)
{
	char **result;
	size_t i;
	size_t wd;
	size_t start;
	size_t end;
	size_t j;
	size_t k;
	wd = count_word(s,c);
	result = malloc((wd + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	while(i < wd)
	{
		while (s[j] && s[j] == c)
			j++;
		start = j;
		while (s[j] != c  && s[j]) 
			j++;
		end = j; 
		result[i] = malloc((end - start + 1) * sizeof(char));
		if (!result[i])
			return (NULL);
		k = 0;
		while(start < end)
		{
			result[i][k] = s[start];
			start++;
			k++;
		}
		result[i][k] = '\0';
		i++;		
	}
	result[wd] = NULL;
	return (result);
}
