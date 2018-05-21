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

	len = ft_strlen(s);
	i = 0;
	p = ft_memalloc(len);
	if(p == NULL)
		return (NULL);
	while (*s == ' ' || *s == '\n' || *s == '\t')
		s++;
	len = ft_strlen(s);
	len--;
	while (s[len] == ' ' || s[len] == '\n' || s[len] == '\t')
		len--;
	while (i != len + 1)
		p[i++] = *s++;
	return (p);
}
