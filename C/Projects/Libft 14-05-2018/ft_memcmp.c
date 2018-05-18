/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstubbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 07:47:54 by pstubbs           #+#    #+#             */
/*   Updated: 2018/05/17 07:47:55 by pstubbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char *p1;
	char *p2;

	p1 = (char*)s1;
	p2 = (char*)s2;
	while (n--)
	{
		if (*p1 == *p2)
		{
			p1++;
			p2++;
		}
		else
			return (*p1 - *p2);
	}
	return (0);
}