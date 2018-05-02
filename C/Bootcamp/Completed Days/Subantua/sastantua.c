/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstubbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/18 11:08:01 by pstubbs           #+#    #+#             */
/*   Updated: 2018/02/18 11:08:03 by pstubbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	sastantuaSegments(int size, int originalsize, int totalrows, int totalcolumns)
{
	int count;
	int actualrow;

	count = 1;
	actualrow = (size-2);

	while (actualrow <= size)
	{


		write(1, "\n", 1);
		actualrow++;
		// row++;
	}

}



void	sastantua(int size)
{
	int count;
	
	int totalrows;
	int totalcolumns;

	count = 1;
	// totalcolumns = 8*(size-1) +2 * (0.5*(((size-1)*(size-1)) +5*(size-1)+2)-1);
	totalrows = 0.5*((size *size) + (5*(size)));
	while (count <= size)
	{
		// sastantuaSegments((count +2), size);
		count++;

	}

}

int		main(void)
{
	int size = 1;
	
	int totalrows;
	int totalcolumns;
	int test;


	totalrows = 0.5*((size *size) + (5*(size)));
	totalcolumns = 8 * (size - 1) + 2 * (0.5 * ((size - 1) * (size - 1)) + 5 * (size - 1) + 2) + 1;
	

	printf("%d\n", totalcolumns);
	printf("%d\n", totalrows);
	// sastantua(1);
	return(0);
}