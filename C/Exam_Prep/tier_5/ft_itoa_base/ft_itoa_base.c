/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstubbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 12:24:38 by pstubbs           #+#    #+#             */
/*   Updated: 2018/06/21 09:01:28 by pstubbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_itoa_base(int value, int base)
{
	char	*ret;
	int		i;
	int		len;
	int 	isneg;
	char	tab[] = "0123456789ABCDEF";
	
	isneg = 0;
	len = 1;
	if (base < 2 || base > 16)
		return (0);
	if (value < 0 && base == 10)
	{
		isneg = 1;
		value *= -1;
	}
	i = value;
	while(i /= base)
		len++;
	len = len + isneg;
	ret = (char*)malloc(sizeof(char) * len +1);
	ret[len] = '\0';
	if (isneg == 1)
		ret[0] = '-';
	while (value > 0)
	{
		ret[--len] = tab[value % base];
		value = value / base;
	}
	return (ret);
}

int	main(void)
{
	printf("%s\n", ft_itoa_base(-15, 16));
	return(0);
}
