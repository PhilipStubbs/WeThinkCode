
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_itoa_base(int value, int base)
{
	char *ret;
	char *minint = "-2147483648";
	char *tab = "0123456789ABCDEF";
	int	isneg;
	int	size;
	int	n;

	size = 1;
	isneg = 0;
	if (base < 2 || base > 16)
		return (NULL);
	if (value == 0)
	{
		ret = (char*)malloc(sizeof(char)* 2);
		ret[0] = '0';
		ret[1] = '\0';
		return (ret);
	}
	if (value == -2147483647 - 1 && base == 10)
		return (minint);
	if (value < 0)
	{
		value *= -1;
		isneg = 1;
	}
	n = value;
	while(n /= base)
		size++;
	if (isneg == 1 && base == 10)
	{
		size++;
		ret = (char*)malloc(sizeof(char)* size);
		ret[0] = '-';
	}
	else
		ret = (char*)malloc(sizeof(char)* size);
	ret[size] = '\0';
	while (value)
	{
		ret[--size] = tab[value % base];
		value /= base;
	}
	return (ret);
}



int main()
{
	printf("output[%s]\n", ft_itoa_base(0, 2));
	return (1);
}