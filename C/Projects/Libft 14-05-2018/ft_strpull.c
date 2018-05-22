/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpull.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstubbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 08:28:18 by pstubbs           #+#    #+#             */
/*   Updated: 2018/05/22 08:28:19 by pstubbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strpull(const char **s, char c)
{
	char	*p;
	int		i;
	int		len;

	i = 0;
	while (**s == c)
	{
		(*s)++;
	}
	len = (ft_wordlen(*s, c) + 1);
	p = ft_memalloc(len);
	ft_bzero(p, len);
	if (p == NULL)
		return (NULL);
	while (**s != c && **s != '\0')
	{
		p[i++] = **s;
		(*s)++;
	}
	return (p);
}
