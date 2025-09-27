#include "libft.h"
int is_in_set(char c , char const *set)
{
	int i;
	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
	if (!s1)
		return (ft_strdup(""));
	int start;
	int end;
	int len;
	int i;
	char *str;
	i = 0;
	while (s1[i])
	{
		if (!is_in_set(s1[i],set))
		{
			start = i;
			break;
		}
		i++;
	}
	i = ft_strlen(s1) - 1;
	while (i != start)
	{
		if (!is_in_set(s1[i],set))
		{
			end = i;
			break;
		}
		i--;
	}
	if (start > end)
		return (ft_strdup(""));
	len = end - start + 1; // " hello word "
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s1[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}	

