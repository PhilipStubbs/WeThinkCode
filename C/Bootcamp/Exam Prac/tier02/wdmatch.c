
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i = 0;

	while(str[i] != '\0')
	{
		ft_putchar(str[i++]);
	}
}

int main(int arc, char **arv)
{

	char *p1 = arv[1];
	char *p2 = arv[2];
	int i = 0;
	int b = 0;
	int count =0;
	int len =0;

	if(arc != 3)
	{
		ft_putchar('\n');
	}
	else
	{
		while (p1[i++])
		{
			len++;
		}
		i=0;
		while (p1[i] != '\0')
		{
			while (p2[b] != '\0')
			{
				if (p1[i] == p2[b])
				{
					i++;
					b++;
					count++;
				}

				else
				{
					b++;
				}

			}
				if((p1[i] != '\0') && (p2[i] == '\0'))
				{
					ft_putstr("RETURNING");
					ft_putchar('\n');
					return(0);
				}

			else
			{
				break;
			}

		}

		if ( count == len)
		{
			ft_putstr(p1);
			ft_putchar('\n');
		}
		else
		{
			ft_putchar('\n');
		}
	}

}