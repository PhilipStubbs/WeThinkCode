#include "libft.h"

void	ft_putnbr(int n)
{
	char	*p;

	p = ft_itoa(n);
	ft_putstr(p);
}