
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int arc, char **arv)
{	
	char *p;
	int i = 0;
	int b = 0;
	int c = 0;

	if(arc != 2)
		write(1, "\n" ,1);

	else
	{	
		p = arv[1];
		while(p[i] == ' ')
		{
			i++;
		}
		c = i;
		i = 0;
		while(p[i] != '\0')
		{	
			if((p[i-1] == ' ' && i >c) && (p[i] != ' ' ))
			{
				b = 0;
				while(b <=2)
				{
					ft_putchar(' ');
					b++;
				}
			}
			if( p[i] != ' ' && i >=c )
			{
				ft_putchar(p[i]);
			}
			i++;
		}
		write(1, "\n" ,1);
	}
}