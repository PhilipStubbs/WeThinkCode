#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int i = 0;
	int in = 0;

	if(str[in] == '-')
	{

		in++;
	}

	while(str[in] >= '0' && str[in] <= '9')
	{
		i = (i *10) + (str[in] - '0');
		in++;
	}

	if(str[0] == '-')
	{
		
		i *= -1;
	}

	return(i);
}

int main(void)
{	
	char str[] = "5684";
	printf("%d", ft_atoi(str));

	printf("%d", atoi(str));
}