/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstubbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 12:29:35 by pstubbs           #+#    #+#             */
/*   Updated: 2018/05/18 12:29:36 by pstubbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	char	*p;
	int		len;

	i = 0;
	if (!s)
		return (NULL);
	while (*s == ' ' || *s == '\n' || *s == '\t')
	{
		s++;
		if (*s == '\0')
			return ((char*)s);
	}
	len = ft_strlen(s);
	len--;
	while (s[len] == ' ' || s[len] == '\n' || s[len] == '\t')
		len--;
	p = ft_memalloc(len + 2);
	if (p == NULL)
		return (NULL);
	while (i != len + 1)
		p[i++] = *s++;
	p[i] = '\0';
	return (p);
}
