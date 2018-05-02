	/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   binary.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstubbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 08:28:08 by pstubbs           #+#    #+#             */
/*   Updated: 2018/02/28 08:28:10 by pstubbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

// void ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

// int binary(unsigned char num)
// {	
// 	if (num < 2 && num >= 0)
// 		return(num);
// 	return binary(num / 2) *10 + num % 2;
// }

// int ft_atoi(unsigned char c)
// {
// 	int i;
// 	i = (c - '0');
// 	return(i);
// }

// void	ft_putnbr(int n)
// {
// 		if (n < 0)
// 		{
// 			ft_putchar('-');
// 			n *= -1;
// 		}
// 		if (n >= 10)
// 			ft_putnbr(n / 10);
// 		ft_putchar((n % 10) + '0');
// }



// void print_bits(unsigned char c)
// {
// 	int a;
// 	int b;
// 	int d;
// 	int count;

// 	d = 0;
// 	b = ft_atoi(c);
// 	a = binary(ft_atoi(c));

// 	count =0;

// 	if (a == 10 )
// 	{
// 		d = 1 ;
// 	}
// 	if (a < 100 && a >=11)
// 	{
// 		d = 1;
// 	}
// 	if (a < 1000 && a >= 100)
// 	{
// 		d = 2;
// 	}
// 		if (a < 10000 && a >= 1000)
// 	{
// 		d = 3;
// 	}
// 		if (a < 100000 && a >= 10000)
// 	{
// 		d = 4;
// 	}
// 		if (a < 1000000 && a >= 100000)
// 	{
// 		d = 5;
// 	}
// 		if (a < 10000000 && a >= 1000000)
// 	{
// 		d = 6;
// 	}
// 		if (a < 100000000 && a >= 10000000)
// 	{
// 		d = 7;
// 	}
// 		if (a < 1000000000 && a >= 100000000)
// 	{
// 		d = 8;
// 	}

// 	while(count <= (6-d))
// 	{
// 		write(1, "0", 1);
// 		count++;
// 	}
// 	ft_putnbr(a);
// 	write(1, "\n", 1);
// }



// int main(void)
// {
// 	unsigned char a = 'a';
// 	unsigned char n = '0';
	

// while(a != 'z')
// {
// 	print_bits(a);
// 	a++;
// }

// write(1,"=======\n" ,8);
// write(1,"NUMBERS\n" ,8);
// write(1,"=======\n" ,8);

// while(n <= '9')
// {
// 	print_bits(n);
// 	n++;
// }

	
// 	return (0);
// }


// #include "bitwise.h"

/*
** First Method is standard while the second one use bitwise operators
*/


void	print_bits(unsigned char octet)
{
	int	i = 256;
	while (i)
	{
		(octet & i) ? write(1, "1", 1) : write(1, "0", 1);
		i>>=1;
	}
}

int		main(void)
{
	int n = 2;
	// char a = 'a';
	print_bits(n);
	write(1, "\n", 1);
    write(1, "\n", 1);
}