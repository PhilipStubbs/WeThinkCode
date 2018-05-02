
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c,1);
}


int main(int arc, char **arv)
{
	int i = 0;
	// int b = 0;
	int firstc = 0;
	char *p;

	if (arc != 2)
	{
		write(1, "\n",1);
	}
	else
	{

		p = arv[1];

		while(p[i] == ' ' || p[i] == '	')
		{
			i++;
		}

		firstc = i;

		i = 0;
		while(p[i])
		{
			if((p[i-1] == ' ' || p[i-1] == '	') && (p[i] != ' ' || p[i] == '	' ) && i > firstc)
			{
				ft_putchar(' ');
			}

			if((i >= firstc) && (p[i] != ' ') && (p[i] != '	'))
			{
				ft_putchar(p[i]);
			}
			i++;
		}
	}
}

