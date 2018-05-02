
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c ,1 );
}

void	ft_putstr(char *str)
{
	int i = 0;
	while(str[i])
	{
		ft_putchar(str[i++]);
	}
}


int main(int arc, char **arv)
{
	int i = 0;
	int b = 0;
	char *p;

	if (arc == 1)
	{
		ft_putchar('\n');
	}
	else
	{
		i = 1;
		while(arv[i])
		{
			p = arv[i];
			b=0;
			while(p[b])
			{
				if (p[b] >= 'A' && p[b] <= 'Z')
				{
					p[b] = (p[b] +32);
				}
				if ((p[b+1] == ' ' || p[b+1] == ' ' || p[b+1] == '\0') && p[b] >= 'a' && p[b] <= 'z' )
				{
					p[b] = (p[b] -32);
				}
				b++;
			}
			i++;
			ft_putstr(p);
			ft_putchar('\n');
		}

	}
}