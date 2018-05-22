/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstubbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 07:32:42 by pstubbs           #+#    #+#             */
/*   Updated: 2018/05/17 07:32:49 by pstubbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int i;
	int in;
	int c;

	i = 0;
	in = 0;
	while (!(str[in] >= '0' && str[in] <= '9'))
	{
		if (ft_isalpha(str[in]))
			return (0);
		in++;
	}
	c = in;
	while (str[in] >= '0' && str[in] <= '9')
	{
		i = (i * 10) + (str[in] - '0');
		in++;
	}
	if (str[c] == '-')
		i *= -1;
	return (i);
}
