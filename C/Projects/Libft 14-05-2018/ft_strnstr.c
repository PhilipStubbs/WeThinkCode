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

	p1 = ft_memalloc(len + 1);
	if (p1 == NULL)
		return (NULL);
	if (strcmp(needle , "") == 0)
		return ((char*)haystack);
	ft_strncpy(p1, haystack, len);
	return (ft_strstr(p1, needle));
}
