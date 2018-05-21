/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstubbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 07:52:05 by pstubbs           #+#    #+#             */
/*   Updated: 2018/05/17 07:52:06 by pstubbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	char	*p1;
	int		i;
	int		e;
	int		size;

	p1 = (char*)src;
	size = (ft_strlen(src) + ft_strlen(dest));
	i = 0;
	e = 0;
	while (dest[i] != '\0')
		i++;
	while (i <= size && p1[e] != '\0')
	{
		dest[i] = p1[e];
		i++;
		e++;
	}
	dest[i] = '\0';
	return (dest + i);
}
