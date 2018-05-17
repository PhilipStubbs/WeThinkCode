/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstubbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 08:09:43 by pstubbs           #+#    #+#             */
/*   Updated: 2018/05/17 08:09:46 by pstubbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*p1;
	int		count;
	int		count1;
	int		i;

	p1 = (char*)str;
	i = 0;
	count = 0;
	count1 = 0;
	while (p1[i] != '\0')
	{
		if (p1[i] == c)
			count++;
		i++;
	}
	if (count == 0)
		return (p1 = NULL);
	while (count1 != count)
	{
		if (*p1 == c)
			count1++;
		p1++;
	}
	return (p1 - 1);
}
