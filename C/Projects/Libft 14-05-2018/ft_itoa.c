#include "libft.h"

char	*ft_calculation(int n, int isneg)
{
	char	*p;
	int		i;
	int		num;

	i = 0;
	p = ft_memalloc(50);
	ft_bzero(p, 50);
	while (n != 0)
	{
		num = n % 10;
		if ( num > 9)
			p[i++] = (num-10) + 'a';
		else
			p[i++] = num + '0';
		n = n / 10;
	}
	if (isneg == 1)
		p[i] = '-';
	return(p);
}

char	*ft_itoa(int n)
{	
	char	*p;
	int		isneg;

	if (n == 0)
	{
		p = ft_memalloc(2);
		p[0] = '0';
		p[1] = '\0';
		return (p);
	}
	if (n < 0)
	{
		isneg = 1;
		n = n *-1;
	}
	return(ft_strrev(ft_calculation(n, isneg)));
}
