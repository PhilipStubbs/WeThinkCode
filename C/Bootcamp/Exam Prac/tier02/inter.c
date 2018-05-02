
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

int main(int arc, char **arv)
{
	int strlen1 = 0;
	int strlen2 = 0;
	int endin1 = 0;
	int endin2 = 0;
	int i = 0;
	int b = 1;
		
	if (arc == 3)
	{
	
	while (arv[1][i] != '\0')
	{
		strlen1++;
		i++;
	}
	i = 0;

	while (arv[2][i] != '\0')
	{
		strlen2++;
		i++;
	}
	i = 0;
	
	endin1 = strlen1;
	endin2 = strlen2;
	while (endin1 >= 0)
	{	
		b = 1;
		while ((endin1 - b) >= 0)
		{
			if (arv[1][endin1] == arv[1][endin1 -b])
			{
				arv[1][endin1] = '^';	
			}
			b++;
		}
		endin1--;
	
	}
	while (endin2 >=0)
	{	
		b = 1;
		while((endin2 -b) >= 0)
		{
			if (arv[2][endin2] == arv[2][endin2 -b])
			{
				arv[2][endin2] = '^';
			}
			b++;
		}
		endin2--;
	}

	i = 0;
	b = 0;

	printf("%s and %s \n", arv[1], arv[2]);

	while (arv[1][i])
	{	
		b=0;
		while(arv[2][b])
		{
			if (arv[1][i] == arv[2][b] && arv[1][i] != '^')
			{
				ft_putchar(arv[1][i]);
			}
		b++;
		}
		i++;
	}
	write(1, "\n",1);
	b = 0;
	}
	else
	{
		write(1, "\n", 1);
	}

}


// }