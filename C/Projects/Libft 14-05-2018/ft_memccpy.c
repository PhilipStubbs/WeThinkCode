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

void			*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;
	unsigned int	i;

	if (!n)
		return (NULL);
	i = 0;
	p1 = (unsigned char*)dest;
	p2 = (unsigned char*)src;
	if (ft_strcmp((char*)src, "") == 0)
	{
		*p1 = '\0';
		return (dest);
	}
	while (i < n)
	{
		if (*p2 == (unsigned char)c)
		{
			*p1 = *p2;
			return (p1 + 1);
		}
		*p1++ = *p2++;
		i++;
	}
	return (NULL);
}
