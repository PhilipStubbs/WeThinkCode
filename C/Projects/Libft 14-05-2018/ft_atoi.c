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

// static int	ft_atoicvaluecheck(long long int i)
// {
// 	// printf("%lld\n" ,i);
// 	int o = i;
// 	if (i <= -469762049)
// 		o = -1;
// 	if ( i >= 469762049)
// 		o = 0;
// 	// if (i <= -9223372036854775807)
// 	// 	i = 0;
// 	// if (i >= 9223372036854775807)
// 	// 	i = -1;

// 	return (o);
// }

int	ft_atoi(const char *str)
{
	long long int i;
	int in;
	int c;

	i = 0;
	in = 0;
	while ((str[in] == '\n') || (str[in] == '\t') || (str[in] == '\v') ||
			(str[in] == ' ') || (str[in] == '\f') || (str[in] == '\r'))
	{
		in++;
	}
	c = in;
	while (str[in] == '-' || str[in] == '+')
		in++;
	while (str[in] >= '0' && str[in] <= '9')
		i = (i * 10) + (str[in++] - '0');
	if (str[c] == '-')
		i *= -1;
	printf("%lld\n", i);
	if ( i == 9223372036854775807)
		i = -1;
	if ( i == -9223372036854775806)
		i = 1;
	return (i);
}
