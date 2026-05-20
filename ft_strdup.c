#include "libft.h"

char *ft_strdup(const char *s)
{
	size_t i;
	char *p;
	i = ft_strlen(s);
	p = malloc((i + 1) * sizeof(char));
	if (p ==  NULL)
		return(NULL);
	i = 0;
	while (s[i])
	{
		p[i] = s[i];
		i++;
	}
	p[i] = '\0';
	return(p);
}
