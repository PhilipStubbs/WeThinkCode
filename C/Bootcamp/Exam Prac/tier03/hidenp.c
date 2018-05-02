
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

int main(int arc, char ** arv)
{
	int i =0;
	int b =0;
	int count = 0;
	char *p;
	char *ps;

	if (arc != 3)
	{
		ft_putchar('\n');
	} 
	else
	{
		p = arv[1];
		ps = arv[2];

		while (p[i])
		{
			if(p[i] == ps[b])
			{
				i++;
				count++;
			}
			if(ps[b] == '\0' || ps[i] == '\0')
			{
				break;
			}

				b++;
		}
		i = 0;
		while(p[i] != '\0')
		{
			i++;
		}
		if( i == (count))
		{
			write(1, "1",1);
			write(1, "\n",1);
		}
		else
		{
			write(1, "0",1);
			write(1, "\n",1);
		}
	}

}