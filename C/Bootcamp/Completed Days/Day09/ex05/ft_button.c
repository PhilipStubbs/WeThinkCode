/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_button.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstubbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 07:13:03 by pstubbs           #+#    #+#             */
/*   Updated: 2018/02/23 08:49:11 by pstubbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_button(int i, int j, int k)
{
	int temp;
	int ind;
	int array[3];
	int dex;

	ind = 0;
	array[0] = i;
	array[1] = j;
	array[2] = k;
	while (ind <= (2 - 1))
	{
		dex = 0;
		while (dex < 2 - ind)
		{
			if (array[dex] > array[dex + 1])
			{
				temp = array[dex];
				array[dex] = array[dex + 1];
				array[dex + 1] = temp;
			}
			dex++;
		}
		ind++;
	}
	return (array[1]);
}
