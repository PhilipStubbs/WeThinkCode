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

	if (!s || len <= 0 || (int)start < 0)
	{
		p = (char*)malloc(0);
		if (!p)
			return (NULL);
	}
	i = 0;
	p = ft_strnew(len);
	if (start > len || p == NULL)
		return (NULL);
	else
	{
		while (s[i] && i < (int)len)
		{
			p[i] = s[i + start];
			i++;
		}
	}
	p[len + 1] = '\0';
	return (p);
}
