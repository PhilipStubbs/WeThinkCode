/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstubbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 15:21:39 by pstubbs           #+#    #+#             */
/*   Updated: 2018/02/21 15:21:41 by pstubbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		arraysize;
	int		*returnarray;
	int		start;
	int		index;

	start = min;
	arraysize = (max) - (min);
	index = 0;
	if (max <= min)
	{
		returnarray = 0;
	}
	else
	{
		returnarray = (int*)malloc(arraysize);
		while (start < max)
		{
			returnarray[index] = start;
			start++;
			index++;
		}
	}
	return (returnarray);
}
