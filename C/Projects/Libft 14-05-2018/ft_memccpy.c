/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstubbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 07:43:53 by pstubbs           #+#    #+#             */
/*   Updated: 2018/05/17 07:43:55 by pstubbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	ch;
	char			*p1;
	char			*p2;
	int				i;
	int				size;

	ch = c;
	p1 = (char*)dest;
	p2 = (char*)src;
	i = 0;
	size = n;
	while (i <= size)
	{
		p1[i] = *p2;
		if (*p2 == ch)
			return (p2++);
		if (i == size && *p2 != ch)
			return (NULL);
		i++;
		p2++;
	}
	return (p1);
}
