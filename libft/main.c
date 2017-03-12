#include "libft.h"
#include <stdio.h>

void    ft_strcut(char *src, char **dst1, char **dst2, size_t index);

int main()
{
	char *src = "qwertyuiop";
	char *s1 = "en i";
	char *s2 = "en Y";

	ft_putstr("src :");
	ft_putstr(src);
	ft_putstr("\ns1 :");
	ft_putstr(s1);
	ft_putstr("\ns2");
	ft_putstr(s2);

	ft_strcut(src, &s1, &s2, 5);
	
	ft_putstr("\nsrc :");
	ft_putstr(src);
	ft_putstr("\ns1 :");
	ft_putstr(s1);
	ft_putstr("\ns2 :");
	ft_putstr(s2);
	return (0);
}
