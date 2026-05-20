#include "libft.h"
int count_words(char const *str, char c)
{
	int i;
	int wd;
	i = 0;
	wd = 0;
	while(str[i])
	{
		while(str[i] == c)
			i++;
		if(str[i]!= c)
			wd++;
		while(str[i]&& str[i] != c)
			i++;
	}
	return(wd);
}
char **ft_split(char const *s, char c)
{
	char **result;
	size_t i;
	size_t j;
	size_t wd;
	size_t start;
	size_t end;
	size_t k;
	wd = count_words(s,c);
	result=malloc((wd + 1) * sizeof(char *));
	if(!result)
		return(NULL);
	i = 0;
	j = 0;
	while(i < wd)
	{
		while(s[j] && s[j] == c)
			j++;
		start = j;
		while(s[j] && s[j] != c)
			j++;
		end = j;
		k = 0;
		result[i] = malloc(end - start + 1);
		if(!result[i])
		{
			while(i > 0)
			{
				i--;
				free(result[i]);
			}
			free(result);
			return(NULL);
		}
		while(k < end - start)
		{
			result[i][k] = s[start + k];
			k++;
		}
		result[i][k] = '\0';
		i++;
	}
	result[i] = NULL;
	return(result);
}
