
#include <stdlib.h>
#include <stdio.h>

int	intlen(int n)
{
	int count;

	count = 0;
	if (n < 0)
	{
		n *= -1;
		count++;
	}
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return(count);

}



char	*ft_itoa_base(int value, int base)
{
	char	*ret;
	int 	len;
	char 	*tab = "0123456789ABCDEF";
	int		isneg;

	len = intlen(value);
	isneg = 0;
	if (value < 0 && base == 10)
	{
		isneg = 1;
		len++;
	}

	ret = (char*)malloc(sizeof(char) *len);
	if(isneg && base == 10)
		ret[0] = '-';
	ret[len] = '\0';
	printf("%d\n", ((value + '0') % base ) );
	while(value > 0)
	{
		ret[--len] = tab[(value + '0') % base ];
		value = value / base;
	}
	return (ret);
}


int main (void)
{
	printf("%s\n",ft_itoa_base(16, 10));

	return (1);
}