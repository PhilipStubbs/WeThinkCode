#include "libft.h"

void ft_striter(char *s, void (*f)(char *))
{
	int len;

	len = ft_strlen(s);
	while (len--)
	{
		f(s++);
	}
}

void test(char *c)
{	
	int a;
	a = *c;
	if(ft_isalpha(a))
	{
		c = c +1;
	}
}

// int	main()
// {
// 	char *p = "abcd";
// 	ft_striter(p, void test(char *c));
// 	ft_putstr(p);
// 	return(1);
// }