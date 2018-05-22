/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstubbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 07:46:58 by pstubbs           #+#    #+#             */
/*   Updated: 2018/05/18 07:46:59 by pstubbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*p;

	i = 0;
	p = ft_memalloc(len);
	if (start > len || p == NULL)
		return (NULL);
	else
	{
		while (start <= len)
			p[i++] = s[start++];
	}
	return (p);
}
