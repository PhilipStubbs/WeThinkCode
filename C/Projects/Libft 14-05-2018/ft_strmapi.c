/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstubbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 17:16:12 by pstubbs           #+#    #+#             */
/*   Updated: 2018/05/17 17:16:13 by pstubbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int				len;
	char			*p;
	unsigned int	i;

	len = ft_strlen(s);
	p = ft_memalloc(len);
	i = 0;
	while (*s)
	{
		p[i] = f(i , *s++);
		i++;
	}
	return (p);
}