#include <stdlib.h>
#include <stdio.h>

int 	ft_intlen(int nbr)
{
	int size;

	size = 0;
	if (nbr < 0)
	{
		size++;
		nbr = nbr * -1;
	}
	while (nbr)
	{
		nbr = nbr /10;
		size++;
	}
	return(size);
}


char	*ft_itoa(int nbr)
{
	int		intlen;
	int 	isneg;
	char	*ret;

	intlen = ft_intlen(nbr);
	ret = (char*)malloc(intlen + 1);
	isneg = 0;
	if (nbr < 0)
	{
		isneg = 1;
		nbr = nbr * -1;
	}
	ret[intlen + 1] = '\0';
	while (nbr)
	{
		ret[--intlen] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	if (isneg)
		ret[0] = '-';
	return (ret);
}

int main()
{
	printf ("%s\n", ft_itoa(-24234));
	return (1);
}