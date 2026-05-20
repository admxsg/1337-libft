#include "libft.h"
#include <stdio.h>
char upper_lower(unsigned int i ,char c)
{
	        if (i % 2 == 0)
			                return (c - 32);
		        return(c);
}
void upper_even(unsigned int i ,char *c)
{
	                if (i % 2 == 0)
				*c -=32;
}
int main ()
{
	printf("isalpha : %d\n" , ft_isalpha(97));
	printf("isdigit : %d\n" , ft_isdigit(48));
	printf("isalnum : %d\n" , ft_isalnum(47));
	printf("isascii : %d\n" , ft_isascii('a'));
	printf("isprint : %d\n" , ft_isprint(31));
	char *str = "hello";
	printf ("strlen : %ld\n" , ft_strlen(str));
	char buf[6];
	ft_memset(buf,'a',5);
	buf[5] = '\0';
	printf("memset : %s\n" , buf);
	ft_bzero(buf, 5);
	printf("bzero : ");
	for (int i = 0; i < 5; i++)
		        printf("%d ", buf[i]);
	    printf("\n");
	char *src = "hello";
	char dest[6];
	ft_memcpy(dest,src,6);
	printf("memcpy : %s\n" , dest);
	char strr[] = "abcdef";
	ft_memmove(strr + 2 , strr , 4);
	printf("memmove : %s\n" , strr);
	printf("strlcpy : %ld & %s\n" , ft_strlcpy(dest, src, sizeof(dest)), dest);
	char *s = "world";
	char d[11] = "hello";
	printf("strlcat : %ld && %s\n" , ft_strlcat(d,s,sizeof(d)), d);
	printf("toupper : %c\n " , ft_toupper('a'));
	printf("tolower : %c\n " , ft_tolower('A'));
	char r[] = "hello";
        printf("strchr : %s\n" , ft_strchr(r,'l'));
	printf("strrchr : %s\n" , ft_strrchr(r,'l'));
	printf("strncmp : %d\n" , ft_strncmp(d,d,2));
	char *mr = ft_memchr(src ,'l' ,5);
	printf("memchr : %s\n" , mr);
	printf ("memcmp : %d\n" , ft_memcmp(d,d,2));
	printf("strnstr : %s\n" , ft_strnstr("hello","ll",5));
	printf("atoi :%d\n" , ft_atoi("42"));
	char *s1 = "adam";
	char *p = ft_strdup(s1);
	printf("strdup : %s\n" , p);
	free(p);
	char *p1 =ft_calloc(3,sizeof(char));
	printf("calloc : %s\n",p1);
	char *p2 = "abcdef";
	printf("substr : %s\n" , ft_substr(p2,4,2));
	char *p3 = "hello";
	char *p4 = "word";
	printf("strjoin : %s\n " , ft_strjoin(p3,p4));
	char *p5  = "+++hello+++";
	printf("strtrim : %s\n" , ft_strtrim(p5,"+"));
	char **p6 = ft_split(" hello word 42 " ,' ');
	int i = 0;
	int j;
	write(1,"split : " ,8);
	while(p6[i])
	{
		j = 0;
		while(p6[i][j])
		{
			write(1,&p6[i][j],1);
			j++;
		}
		i++;
		write(1," ",1);
	}
	write(1,"\n",1);
	free(p6);\
	char *p7 = ft_itoa(-42);
	printf("itoi : %s\n " , p7);
	free(p7);
	char *p8 = ft_strmapi("helloword" ,upper_lower);
	printf("strmapi : %s\n" , p8);
	free(p8);
	char p9[] = "helloword";
	ft_striteri(p9,upper_even);
	printf("striteri : %s\n" , p9);
	write(1,"putchar : ",10);
	ft_putchar_fd('A',1);
	write(1,"\n",1);
	write(1,"putstr : ",8);
	ft_putstr_fd("hello",1);
	write(1,"\n",1);
}
