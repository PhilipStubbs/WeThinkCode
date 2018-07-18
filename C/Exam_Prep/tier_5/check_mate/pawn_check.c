
#include "check_mate.h"

int	pawn_check(char **board, int len , int y, int x)
{
	int tmpx;
	int tmpy;
	int	xval;
	int	yval;

	tmpy = y-1;
	tmpx = x;
	xval = 1;
	yval = 1;
	if (y == 0)
		return (0);

	if (tmpy < 0)
		yval = 0;
	if (yval == 1)
	{
		if (board[tmpy][tmpx-1] == 'K')
			return (1);
	}
	if (tmpx -1 < 0 && tmpx + 1 > len)
		xval = 0;
	if (xval == 1)
	{
		if (board[tmpy][tmpx+1] == 'K')
			return (1);
	}
	return(0);
}