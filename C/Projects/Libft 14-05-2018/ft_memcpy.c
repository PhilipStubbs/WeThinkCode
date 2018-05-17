/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstubbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 07:48:20 by pstubbs           #+#    #+#             */
/*   Updated: 2018/05/17 07:48:21 by pstubbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int		size;
	int		i;
	char	*p1;
	char	*p2;

	size = n;
	i = 0;
	p1 = (char*)dest;
	p2 = (char*)src;
	while (i <= size)
	{
		p1[i] = p2[i];
		i++;
	}
	return (dest);
}
