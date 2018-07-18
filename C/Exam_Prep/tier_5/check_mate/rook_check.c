
#include "check_mate.h"

int	rook_check(char **board, int len , int y, int x)
{
	int tmpx;
	int tmpy;

	tmpy = y;
	tmpx = x;

	//go down
	while (board[tmpy][tmpx])
	{
		// printf("%d : %d\n",tmpy, tmpx );
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
		//go up
	while (board[tmpy][tmpx])
	{
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
		//go left
	while (board[tmpy][tmpx])
	{
		tmpx--;
		if (tmpy >= len || tmpx >= len || tmpx < 0 || tmpy < 0)
			break;
		if (board[tmpy][tmpx] == 'K')
			return (1);
		else if (board[tmpy][tmpx] == 'Q' || board[tmpy][tmpx] == 'B' || board[tmpy][tmpx] == 'R' || board[tmpy][tmpx] == 'P')
			break;
		
	}
	tmpy = y;
	tmpx = x;
		//go right
	while (board[tmpy][tmpx])
	{
		tmpx++;
		if (tmpy >= len || tmpx >= len || tmpx < 0 || tmpy < 0)
			break;
		if (board[tmpy][tmpx] == 'K')
			return (1);
		else if (board[tmpy][tmpx] == 'Q' || board[tmpy][tmpx] == 'B' || board[tmpy][tmpx] == 'R' || board[tmpy][tmpx] == 'P')
			break;
	}
	return (0);
}