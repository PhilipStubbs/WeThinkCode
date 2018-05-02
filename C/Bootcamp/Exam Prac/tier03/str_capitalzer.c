
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c ,1);
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
char	ft_convert(char c)
{
	return(c - 32);
}


int main(int arc, char **arv)
{

	char *p;
	int i = 0;
	// int b = 0;
	int a = 1;


	if (arc == 1)
	{
		write(1,"\n",1);
	}
	else
	{
		p = arv[a];
		while(arv[a])
		{

			i = 0;
			while(arv[a][i])
			{
				if(arv[a][i] >= 'A' && arv[a][i] <= 'Z')
				{
					arv[a][i] = (arv[a][i] + 32);
				}
				if((i == 0 && arv[a][i] >= 'a' && arv[a][i] <= 'z') || (arv[a][i-1] == ' ' && arv[a][i] >= 'a' && arv[a][i] <= 'z'))
				{
					arv[a][i] = (arv[a][i] - 32);
				}

				else 
				{
					arv[a][i] = arv[a][i];
				}
				i++;
			}

			ft_putstr(arv[a]);
			ft_putchar('\n');
			a++;
		}
	}
}