/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstubbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 07:49:28 by pstubbs           #+#    #+#             */
/*   Updated: 2018/05/17 07:49:29 by pstubbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*p1;
	char	*p2;
	int		i;
	int		size;

	p1 = (char*)dest;
	p2 = (char*)src;
	i = 0;
	size = n;
	while (i <= size)
	{
		p1[i] = p2[i];
		i++;
	}
	return (p1);
}
