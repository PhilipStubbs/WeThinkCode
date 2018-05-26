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
	char	**ret;
	char	*temp;
	int		tempint;

	i = 0;
	words = ft_strcount(s, c);
	ret = (char**)malloc(words + 1);
	tempint = 0;
	if (!ret || !s || !c)
		return (NULL);
	while (i < words)
	{	
		while (s[tempint] == c)
			tempint++;
		temp = (char*)malloc(ft_strlen(ft_strpull_idx(s, c, tempint)));
		temp = ft_strpull_idx(s, c, tempint);
		ret[i] = ft_strnew(ft_strlen(temp));
		ft_strcpy(ret[i], temp);
		while (s[tempint] != c)
			tempint++;
		i++;
	}
	return (ret);
}
