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
	unsigned char	*p1;
	unsigned char	*p2;
	unsigned int	i;

	i = 0;
	p1 = (unsigned char*)dest;
	p2 = (unsigned char*)src;
	if (ft_strcmp((char*)src, "") == 0)
		{
			write(1, "HERE", 4);
			*p1 = '\0';
			return (dest);
		}
	while (i < n)
	{
		*p1++ = *p2++;
		if (*p2 == (unsigned char)c)
		{
			*p1 = *p2;
			return (p1 +1);
		}
		i++;
	}
	return (NULL);
}
