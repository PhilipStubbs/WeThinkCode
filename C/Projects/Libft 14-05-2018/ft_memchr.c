/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstubbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 07:46:04 by pstubbs           #+#    #+#             */
/*   Updated: 2018/05/17 07:46:07 by pstubbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	unsigned char	ch;
	char			*p1;
	int				i;
	int				size;

	p1 = (char*)src;
	ch = c;
	i = 0;
	size = n;
	while (i <= size)
	{
		if (*p1 == ch)
			return (p1);
		p1++;
		i++;
	}
	return (NULL);
}
