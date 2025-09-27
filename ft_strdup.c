#include "libft.h"

char *ft_strdup(const char *s)
{
	int i;
	int size;
	char *c;
	size = ft_strlen(s);
	c =  malloc((size + 1) * sizeof(char));
	i = 0;
	while(s[i])
	{
		c[i] = s[i];
		i++;
	}
	c[i] = '\0';
	return (c);
}
	
