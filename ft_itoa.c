#include"libft.h"
int len(long nb)
{
	int len;
	len = 0;
	if (nb == 0)
		return(1);
	if (nb < 0)
	{
		len++;
		nb = -nb;
	}
	while(nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}
char    *ft_itoa(int n)
{
	char *s;
	long nb;
	int ilen;
	nb = n;
	ilen = len(nb);
	s = malloc((ilen + 1) * sizeof(char));
	if(!s)
		return(NULL);
	s[ilen] = '\0';
	if(nb == 0)
	{
		s[0] = '0';
		return(s);
	}
	if (nb < 0)
	{
		s[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		ilen--;
		s[ilen] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return(s);
}
