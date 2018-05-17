/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstubbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 08:03:00 by pstubbs           #+#    #+#             */
/*   Updated: 2018/05/17 08:03:02 by pstubbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t len)
{
	char			*p1;
	unsigned int	i;
	unsigned int	e;
	unsigned int	size;

	p1 = (char*)src;
	size = (ft_strlen(src) + ft_strlen(dest));
	i = 0;
	e = 0;
	while (dest[i] != '\0')
		i++;
	while (e < len && p1[e] != '\0')
	{
		dest[i++] = p1[e++];
	}
	dest[i] = '\0';
	return (len + size);
}
