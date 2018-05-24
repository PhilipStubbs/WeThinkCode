/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstubbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 17:47:49 by pstubbs           #+#    #+#             */
/*   Updated: 2018/05/17 17:47:53 by pstubbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	unsigned int	i;
	unsigned int	c;

	i = 0;
	c = 1;
	if (ft_strcmp(s1, "") == 0 && ft_strcmp(s2, "") == 0)
		return (1);
	while (s1[i] != '\0' && i <= n)
	{
		if ((s1[i + 1] == '\0' && s2[i + 1] == '\0') && (s1[i] == s2[i]))
			return (1);
		if (c == n && s1[i] == s2[i])
			return (1);
		else if (s1[i] != s2[i])
			return (0);
		else
		{
			i++;
			c++;
		}
	}
	return (0);
}
