/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstubbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 09:38:24 by pstubbs           #+#    #+#             */
/*   Updated: 2018/06/13 09:49:43 by pstubbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		test_base(const char c)
{
	int		nb;

	if (c >= '0' && c <= '9')
		nb = c - '0';
	else if (c >= 'a' && c <= 'z')
		nb = c - 'a' + 10;
	else if (c >= 'A' && c <= 'Z')
		nb = c - 'A' + 10;
	else
		nb = -1;
	return (nb);
}

int	mine_atoi_base(const char *str, int str_base)
{
	int	isneg;
	int nbr;
	int current;

	isneg = 0;
	nbr = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t'|| *str == '\f' || *str == '\r' || *str == '\v')
		str++;
	if (*str == '-')
	{
		str++;
		isneg = 1;
	}
	if (*str == '+')
		str++;

	current = test_base(*str);

	while (current >= 0 && current < str_base)
	{
		nbr = nbr * str_base + current;
		str++;
		current = test_base(*str);
	}
	if (isneg == 1)
		nbr *= -1;
	return (nbr);
}

int main ()
{
	printf("%d\n",mine_atoi_base("0123456789abcdef", 16));
	printf("%d\n",ft_atoi_base("0123456789abcdef", 10));
	return (1);
}