/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstubbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 08:23:47 by pstubbs           #+#    #+#             */
/*   Updated: 2018/02/22 08:23:51 by pstubbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int main, int max);

int		*ft_ultimate_range(int **range, int min, int max)
{
	int		arraysize;
	int		*returnarray;
	int		start;
	int		index;

	start = min;
	arraysize = max - min;
	index = 0;
	while (*range[index] <9)
	{
		printf("%d\n", (*range)[index]);
	}
	// if (max <= min)
	// {
	// 	returnarray = 0;
	// }
	// else
	// {
	// 	returnarray = (int*)malloc(arraysize);
	// 	while (start < max)
	// 	{
	// 		returnarray[index] = start;
	// 		start++;
	// 		index++;
	// 	}
	// }
	// return (returnarray);
	return(returnarray);
}

int main()
{

	int a;
	int **b;
	int c;

	a = 5;
	c = 10;
	*b = ft_range(a, c);
	while (a < c)
	{
		
		printf("%d", **b);
		a++;
		b++;
	}
	ft_ultimate_range(b, 1 , 20);
	return (0);
}