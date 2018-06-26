/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstubbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 13:11:13 by pstubbs           #+#    #+#             */
/*   Updated: 2018/06/13 13:25:34 by pstubbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_fprime(char *str)
{
	long n;
	long dv;

	dv = 2;
	n = atoi(str);
	if (n == 1)
		printf("1");
	if (n == 0)
		return ;
	while (dv <= n)
	{
		if (n % dv == 0)
		{	
			printf("%ld",dv);
			if (dv == n)
				return ;
			n = n / dv;
			dv = 1;
			printf("*");
		}
		dv++;
	}
}


int main(int arc, char **arv)
{
	if ( arc == 2)
		ft_fprime(arv[1]);
	printf("\n");
	return (1);
}
