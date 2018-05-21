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
	unsigned int	i;
	unsigned char	ch;
	char			*p1;
	char			*p2;

	ch = (unsigned char)c;
	p1 = (char*)dest;
	p2 = (char*)src;
	i = 0;
	while (i <= n)
	{	
		p1[i] = p2[i];
		if (p2[i] == ch)
			return(dest + i + 1);
		i++;
	}
	return (NULL);
}
