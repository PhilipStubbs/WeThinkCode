
#include <unistd.h>


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_itoa(int n)
{
	if(n >=10)
	{
		ft_itoa(n / 10);
	}
	ft_putchar((n % 10) + '0');
}



int main(int arc, char **arv)
{

	(void)arv;
	if(arc > 1)
	{
		ft_itoa((arc-1));
	}
	else
		{
			ft_itoa(0);
		}
}