#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
	char *str;
	size_t	i;
	size_t	t;
	size_t is1;
	size_t	is2;
	if ( !s1 || !s2)
		return(NULL);
	is1 =ft_strlen(s1);
	is2 =ft_strlen(s2);
	str = malloc((is1 + is2 + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while(s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	t = 0;
	while(s2[t] != '\0')
	{
		str[i] = s2[t];
		i++;
		t++;
	}
	str[i] = '\0';
	return(str);
}
