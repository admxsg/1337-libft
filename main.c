#include "libft.h"
#include <stdio.h>

int main()
{
    char str[] = "Hello";
    printf ("isalpha : %d\n" ,  ft_isalpha(97));
    printf ("isdigit : %d\n" ,  ft_isdigit(48));
    printf ("isalnum : %d\n" ,  ft_isalnum(48));
    printf ("isascii: %d\n" ,  ft_isascii(48));
    printf ("isprint: %d\n" ,  ft_isprint(48));
    printf ("strlen : %ld\n" ,  ft_strlen(str));
    printf ("memset: %p\n" ,  ft_memset(str, 'X', 3));
    printf("Modified string after memset: %s\n", str);
    printf ("bzero: ");
    ft_bzero(str, 2); 
    for (int i = 0; i < 5; i++)
        printf("%d ", str[i]);
    printf("\n");
    printf ("memcpy: %p\n" ,  ft_memcpy(str, "World", 5));
    printf("Modified string after memcpy: %s\n", str);
    char str1[] = "abcdef";
    printf("memmove:  %s\n", (char *)ft_memmove(str1+3, str1, 3));
    printf("string after memmove :%s\n", str1);
    char dst[4];
    char src[] = "hello word";
    printf ("strlcpy: %ld\n" ,  ft_strlcpy(dst, src, sizeof(dst)));
    printf("dst after strlcpy: %s\n", dst);
    printf("src after strlcpy: %s\n", src);
    char dest[15] = "Hello";
    char source[] = " World";
    printf ("strlcat: %ld\n" ,  ft_strlcat(dest, source, sizeof(dest)));
    printf("dest after strlcat: %s\n", dest);
    printf("src after strlcat: %s\n", source);
    printf ("toupper: %c\n" ,  ft_toupper('a'));
    printf ("tolower: %c\n" ,  ft_tolower('A'));
    printf ("strchr: %s\n" ,  ft_strchr("Hello", 'l'));
    printf ("strrchr: %s\n" ,  ft_strrchr("Hello", 'l'));
    printf ("strncmp: %d\n" ,  ft_strncmp("Hello", "HeLlo", 3));    
    char mem[] = "abcdef";
    printf ("memchr: %s\n" ,  (char *)ft_memchr(mem, 'd', 6));
    printf ("memcmp: %d\n" ,  ft_memcmp("abcde", "abCde", 5));
    printf("strnstr : %s\n" ,ft_strnstr("hello word","ll",5));
    return 0;
}