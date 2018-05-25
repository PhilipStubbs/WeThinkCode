
#include "libft.h"

int	ft_intlen(int n)
{
	int	ret;

	ret = 0;
	if (n < 0)
	{
		n = n * 1;
		ret++;
	}
	while(n)
	{
		n = n / 10;
		ret++;
	}
	return (ret);
}
