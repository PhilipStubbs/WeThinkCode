/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   searchandmalloc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstubbs <pstubbs@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 14:01:55 by pstubbs           #+#    #+#             */
/*   Updated: 2018/07/21 10:33:00 by pstubbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		isvalidflag(char *s, t_hold *node)
{
	int i;

	i = 0;
	if (s[i] == '-' && s[i + 1] == 'v')
	{
		node->vis = 1;
		return (1);
	}
	if (s[i] == '-' && s[i + 1] == 'c')
	{
		node->colour = 1;
		return (1);
	}
	if (s[i] == '-' && s[i + 1] == 's')
	{
		node->supcolour = 1;
		return (1);
	}
	if (s[i] == '-' && s[i + 1] == 'd')
	{
		node->debug = 1;
		return (1);
	}
	return (0);
}

int		isflag(char *s, t_hold *node)
{
	int i;

	i = 0;
	if (isvalidflag(s, node) == 1)
		return (1);
	i++;
	while (s[0] == '-' && (s[i] >= '0' && s[i] <= '9'))
	{
		i++;
		if (s[i] == '\0')
			return (1);
	}
	return (0);
}

int		isvalid(char *s, t_hold *node)
{
	int	i;

	i = 0;
	while (s[i])
	{
		while (ft_isspace(s[i]) == 1 && s[i] != '\0')
			i++;
		if (ft_atol(s) > INT_MAX || ft_atol(s) < INT_MIN)
			return (0);
		if ((!(s[i] >= '0' && s[i] <= '9') && s[i] != '\0'))
		{
			if (isflag(s + i, node) == 1)
				return (1);
			else
				return (0);
		}
		i++;
	}
	return (i);
}

int		sizefind(t_hold *node)
{
	int	i;

	i = 0;
	while (node->raw[i] != NULL)
	{
		i++;
	}
	i -= (node->debug + node->colour);
	return (i);
}

int		searchandmalloc(char **str, t_hold *node, int arc)
{
	int	i;

	i = 0;
	if (arc == 2)
	{
		node->raw = ft_split(str[1]);
	}
	else
	{
		node->raw = str + 1;
	}
	while (node->raw[i] != NULL)
	{
		if (isvalid(node->raw[i], node) == 0)
		{
			ERROR;
			return (0);
		}
		i++;
	}
	node->size = sizefind(node);
	return (i);
}
