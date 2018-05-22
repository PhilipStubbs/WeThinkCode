/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstubbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 17:31:28 by pstubbs           #+#    #+#             */
/*   Updated: 2018/05/17 17:31:29 by pstubbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int	i;
	int s1len;
	int s2len;

	i = 0;
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	if (s1len != s2len)
		return (0);
	while (s1[i] != '\0')
	{
		if (s1[i + 1] == '\0' && s2[i + 1] == '\0')
			return (1);
		if (s1[i] != s2[i])
			return (0);
		else
			i++;
	}
	return (0);
}
