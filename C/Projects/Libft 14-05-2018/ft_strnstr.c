/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstubbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 08:08:26 by pstubbs           #+#    #+#             */
/*   Updated: 2018/05/17 08:08:30 by pstubbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*p1;
	int		i;
	size_t	count;

	p1 = (char*)haystack;
	i = 0;
	count = 0;
	while (1)
	{
		if (count++ >= len)
			return (p1 = NULL);
		if (needle[i] == p1[i])
		{
			if (needle[i + 1] == '\0')
				return (p1);
			i++;
		}
		else
		{
			i = 0;
			if (p1[i] == '\0')
				return (p1 = NULL);
			p1++;
		}
	}
}
