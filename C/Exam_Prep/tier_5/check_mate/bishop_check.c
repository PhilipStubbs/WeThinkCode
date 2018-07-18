
#include "check_mate.h"

int	bishop_check(char **board, int len , int y, int x)
{
	int tmpx;
	int tmpy;

	tmpy = y;
	tmpx = x;

	//go bottom right
	while (board[tmpy][tmpx])
	{
		// printf("%d : %d\n",tmpy, tmpx );
		tmpx++;
		tmpy++;
		if (tmpy >= len || tmpx >= len || tmpx < 0 || tmpy < 0)
		{
			break;
		}
		if (board[tmpy][tmpx] == 'K')
			return (1);
		else if (board[tmpy][tmpx] == 'Q' || board[tmpy][tmpx] == 'B' || board[tmpy][tmpx] == 'R' || board[tmpy][tmpx] == 'P')
			break;
	}

	tmpy = y;
	tmpx = x;
		//go bottom left
	while (board[tmpy][tmpx])
	{
		tmpx--;
		tmpy++;
		if (tmpy >= len || tmpx >= len || tmpx < 0 || tmpy < 0)
			break;
		if (board[tmpy][tmpx] == 'K')
			return (1);
		else if (board[tmpy][tmpx] == 'Q' || board[tmpy][tmpx] == 'B' || board[tmpy][tmpx] == 'R' || board[tmpy][tmpx] == 'P')
			break;
	}

	tmpy = y;
	tmpx = x;
		//go top left
	while (board[tmpy][tmpx])
	{
		tmpx--;
		tmpy--;
		if (tmpy >= len || tmpx >= len || tmpx < 0 || tmpy < 0)
			break;
		if (board[tmpy][tmpx] == 'K')
			return (1);
		else if (board[tmpy][tmpx] == 'Q' || board[tmpy][tmpx] == 'B' || board[tmpy][tmpx] == 'R' || board[tmpy][tmpx] == 'P')
			break;
		
	}
	tmpy = y;
	tmpx = x;
		//go top right
	while (board[tmpy][tmpx])
	{
		tmpx++;
		tmpy--;
		if (tmpy >= len || tmpx >= len || tmpx < 0 || tmpy < 0)
			break;
		if (board[tmpy][tmpx] == 'K')
			return (1);
		else if (board[tmpy][tmpx] == 'Q' || board[tmpy][tmpx] == 'B' || board[tmpy][tmpx] == 'R' || board[tmpy][tmpx] == 'P')
			break;
	}
	return (0);
}