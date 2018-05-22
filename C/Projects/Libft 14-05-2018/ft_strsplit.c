/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstubbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 08:30:35 by pstubbs           #+#    #+#             */
/*   Updated: 2018/05/22 08:30:39 by pstubbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int		words;
	int		i;
	char	**cp;
	char	*temp;

	words = ft_strcount(s, c);
	cp = (char**)malloc(words);
	i = 0;
	while (i <= words)
	{
		temp = ft_strpull(&s, c);
		if (temp == NULL)
			return (NULL);
		cp[i] = temp;
		i++;
	}
	return (cp);
}
