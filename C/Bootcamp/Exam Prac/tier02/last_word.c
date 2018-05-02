
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int size;
	int i;
	int lastLetter;

	size = 0;
	i = 0;
	lastLetter = 0;
	if (argc == 2)
	{


		while(argv[1][i] != '\0')
		{
			size++;
			i++;
		}
		i = (size-1);
		while (argv[1][i] == ' ' || (argv[1][i] == '	' ))
		{
			i--;
		}
		lastLetter = i;
		while (argv[1][i] != ' ' && argv[1][i] != '	')
		{
			i--;
		}	
		i = (i+1);
		while(i <= lastLetter)
		{
			ft_putchar(argv[1][i]);
			i++;
		}
	}
	return (0);
}