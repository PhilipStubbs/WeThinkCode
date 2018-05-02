
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i = 0;

	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_atoi(char *str)
{
	int i;

	i = 0;
	while(*str >= '0' && *str <= '9')
	{
		i = (i * 10) + (*str - '0');
		str++;
	}
	return(i);
}

void	ft_itoa(int n)
{
	if (n >= 10)
	{
		ft_itoa((n / 10));
	}
	ft_putchar((n % 10) + '0');
}

int main(int arc, char **arv) 
{
	
	(void)arv;
	int i = 1;
	int b = 0;
	int result = 0;

	if (arc != 2)
	{
		ft_putchar('\n');
	}
	else
	{
		while (i <= 9)
		{	
			b = ft_atoi(arv[1]);
			result = ( i * b);
			ft_itoa(i);
			ft_putstr(" x ");
			ft_itoa(b);
			ft_putstr(" = ");
			ft_itoa(result);
			ft_putchar('\n');
			i++;
		}
	}

	return(0);
}