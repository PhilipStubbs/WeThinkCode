/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstubbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 16:54:02 by pstubbs           #+#    #+#             */
/*   Updated: 2018/05/17 16:54:04 by pstubbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		len;
	int		i;
	char	*p;

	len = ft_strlen(s);
	p = ft_memalloc(len);
	i = 0;
	while (*s)
	{
		p[i++] = f(*s++);

	}
	return (p);
}