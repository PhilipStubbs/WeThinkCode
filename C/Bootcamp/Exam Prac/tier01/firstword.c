
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	while((argv[1][i] == ' ' ) || (argv[1][i] == '	'))
	{
		i++;
	}
	while((argv[1][i] != '\0') && (argv[1][i] != '\t') && (argv[1][i] != ' '))
	{
		ft_putchar(argv[1][i]);
		i++;
	}

	return (0);
}