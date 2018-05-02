/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstubbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 13:12:37 by pstubbs           #+#    #+#             */
/*   Updated: 2018/02/21 15:14:40 by pstubbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		sizesrc;
	int		index;
	char	*ptr2;

	sizesrc = 0;
	index = 0;
	while (src[sizesrc] != '\0')
	{
		sizesrc++;
	}
	ptr2 = (char*)malloc(sizesrc + 2);
	while (index <= (sizesrc))
	{
		ptr2[index] = src[index];
		index++;
	}
	return (ptr2);
}
