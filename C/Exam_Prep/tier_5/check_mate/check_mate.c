
#include "check_mate.h"

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	**createboard(char **arv)
{
	char **board;
	int	len;
	int y;
	int x;

	len = ft_strlen(arv[0]);
	board = (char**)malloc(sizeof(char*) * len +1);
	y = 0;
	x = 0;

	while (y < len)
	{

		board[y] = (char*)malloc(sizeof(char) * len +1);
		x = 0;
		while (x < len)
		{
			board[y][x] = arv[y][x];
			x++;
		}
		board[y][x] = '\0';
		y++;
	}

	board[y] = NULL;
	return (board);
}


int	main(int arc, char **arv)
{
	
	char **board;
	int	len;
	int i;
	int	x;

	if (arc == 1)
	{
		write(1, "\n", 1);
		return (0);
	}

	len = ft_strlen(arv[1]);
	board = createboard(arv+1);

	i = 0;
	while (board[i])
	{
		x = 0;
		while (board[i][x])
		{
			if (board[i][x] == 'B')
			{	
				if (bishop_check(board, len, i, x) == 1)
				{
					ft_putstr("Success\n");
					return (1);
				}
			}
			if (board[i][x] == 'R')
			{
				if (rook_check(board, len, i, x) == 1)
				{
					ft_putstr("Success\n");
					return (1);
				}
			}
			if (board[i][x] == 'Q')
			{
				if (rook_check(board, len, i, x) == 1 || bishop_check(board, len, i, x) == 1)
				{
					ft_putstr("Success\n");
					return (1);
				}
			}
			if (board[i][x] == 'P')
			{
				if (pawn_check(board, len, i, x) == 1)
				{
					ft_putstr("Success\n");
					return (1);
				}
			}
			x++;
		}
		i++;
	}
	ft_putstr("Fail\n");

	return (1);
}















