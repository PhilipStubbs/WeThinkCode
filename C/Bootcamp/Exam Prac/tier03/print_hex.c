#include <stdio.h>
#include <unistd.h>

int ft_atoi(char *str)
{
	int i = 0;
	long b = 0;

	while (str[i] >= '0' && str[i] <= '9')
	{
		b = (b * 10)+ (str[i] - '0');
		i++;
	}

	return(b);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


void	ft_puthex(int n)
{	
	char hexarray[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};

	if (n >=16)
	{
		ft_puthex(n / 16);
	}
	ft_putchar(hexarray[n % 16]);
}

int main(int arc, char **arv)
{	
	if (arc == 2)
	{
	ft_puthex(ft_atoi(arv[1]));
	ft_putchar('\n');
	}
	else
	{
		ft_putchar('\n');
	}
}






