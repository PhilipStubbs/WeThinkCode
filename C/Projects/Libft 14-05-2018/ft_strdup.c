/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstubbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 08:01:48 by pstubbs           #+#    #+#             */
/*   Updated: 2018/05/17 08:01:55 by pstubbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*rstr;
	int		i;
	int		size;

	i = 0;
	size = ft_strlen(src);
	rstr = malloc(size);
	while (i <= size)
	{
		rstr[i] = src[i];
		i++;
	}
	return (rstr);
}
