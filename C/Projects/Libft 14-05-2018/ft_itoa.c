/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstubbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 08:09:06 by pstubbs           #+#    #+#             */
/*   Updated: 2018/05/22 08:09:09 by pstubbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_calculation(long n, int isneg)
{
	char	*p;
	int		i;
	int		num;

	i = 0;
	p = ft_memalloc(100);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, 100);
	while (n != 0)
	{
		num = n % 10;
		if (num > 9)
			p[i++] = (num - 10) + 'a';
		else
			p[i++] = num + '0';
		n = n / 10;
	}
	if (isneg == 1)
		p[i] = '-';
	return (p);
}

char	*ft_itoa(int n)
{
	char	*p;
	int		isneg;
	long	num;

	isneg = 0;
	num = n;
	if (num == 0)
	{
		p = ft_memalloc(2);
		if ( p == NULL)
			return (NULL);
		p[0] = '0';
		p[1] = '\0';
		return (p);
	}
	if (num < 0)
	{
		isneg = 1;
		num = num * -1;
	}
	return (ft_strrev(ft_calculation(num, isneg)));
}
