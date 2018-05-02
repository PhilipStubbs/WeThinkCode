/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstubbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/17 11:26:32 by pstubbs           #+#    #+#             */
/*   Updated: 2018/02/17 11:26:34 by pstubbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rushcorners(int xc, int yc, int x, int y)
{
	if ((yc == y) && (xc == x) && (xc > 1) && (y > 1))
	{
		write(1, "/", 1);
	}
	if ((yc == 1 && xc == 1))
	{
		write(1, "/", 1);
	}
	if ((yc == 1 && ((xc > 1) && (xc == x))))
	{
		write(1, "\\", 1);
	}
	if (((y > 1) && (yc == y)) && (xc == 1))
	{
		write(1, "\\", 1);
	}
}

void	rushsides(int xc, int yc, int x, int y)
{
	if ((yc >= 2 && yc <= (y - 1)) && (xc == 1 || xc == x))
	{
		write(1, "*", 1);
	}
	if ((xc > 1 && xc < x) && ((yc == 1) || (yc == y)))
	{
		write(1, "*", 1);
	}
}

void	rushempt(int xc, int yc, int x, int y)
{
	if ((yc > 1 && yc < y) && (xc > 1 && xc < x))
	{
		write(1, " ", 1);
	}
}

void	rush(int x, int y)
{
	int yc;
	int xc;

	yc = 1;
	xc = 1;
	while (yc <= y)
	{
		while (xc <= x)
		{
			rushcorners(xc, yc, x, y);
			rushsides(xc, yc, x, y);
			rushempt(xc, yc, x, y);
			xc++;
		}
		xc = 1;
		write(1, "\n", 1);
		yc++;
	}
}
