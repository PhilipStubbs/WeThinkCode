/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   saveinput.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstubbs <pstubbs@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/30 11:21:24 by pstubbs           #+#    #+#             */
/*   Updated: 2018/07/30 12:29:34 by pstubbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

char	**createnewdouble(t_hold *node, int size, char *adding)
{
	char	**list;
	int		i;

	i = 0;
	list = (char**)ft_memalloc(sizeof(char *) * (size + 2));
	while (i <= size)
	{
		list[i] = ft_strdup(node->allinput[i]);
		i++;
		if (node->allinput[i] == NULL)
			break ;
	}
	list[i] = ft_strdup(adding);
	list[i + 1] = NULL;
	return (list);
}

void	savetodouble(t_hold *node)
{
	char	**tmplst;
	int		i;

	i = 0;
	if (!(node->allinput))
	{
		node->allinput = (char**)ft_memalloc(sizeof(char *) * 2);
		node->allinput[0] = ft_strdup(node->rawstr);
		node->allinput[1] = NULL;
		return ;
	}
	while (node->allinput[i] != NULL)
		i++;
	tmplst = createnewdouble(node, i, node->rawstr);
	deldouble(&node->allinput);
	node->allinput = tmplst;
}

void	saveinput(t_hold *node)
{
	char	*tmp;

	if (!(node->rawallinput))
	{
		node->rawallinput = ft_strdup(node->rawstr);
		return ;
	}
	tmp = node->rawallinput;
	node->rawallinput = ft_strmerge(tmp, node->rawstr);
	free(tmp);
	savetodouble(node);
}

void	printallinput(t_hold *node)
{
	int		i;

	i = 0;
	while (node->allinput[i] != NULL)
	{
		ft_putendl(node->allinput[i++]);
	}
}
