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
	int			words;
	int			i;
	char		**cp;
	char		*temp;
	const char	*tempstr;

	tempstr = (char*)malloc(ft_strlen(s) + 1);
	words = ft_strcount(s, c);
	cp = (char**)malloc(words + 1);
	if (tempstr == NULL || cp == NULL)
		return (NULL);
	i = 0;
	tempstr = ft_strdup(s);
	while (i < words)
	{
		temp = ft_strpull(&tempstr, c);
		if (temp == NULL)
			return (NULL);
		cp[i] = ft_strnew(ft_strlen(temp));
		ft_strcpy(cp[i], temp);
		free(temp);
		i++;
	}
	return (cp);
}
