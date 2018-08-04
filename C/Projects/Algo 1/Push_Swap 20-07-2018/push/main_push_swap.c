/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_push_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstubbs <pstubbs@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 14:01:33 by pstubbs           #+#    #+#             */
/*   Updated: 2018/07/21 10:31:41 by pstubbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int arc, char **arv)
{
	t_hold	*node;
	char	*cmd;

	node = malloctime();
	if (searchandmalloc(arv, node, arc) == 0)
		return (0);
	if (populatestack(node->raw, node, 0) == 0)
		return (0);
	node->size = listsize(node->a);
	normlize(node, node->size);
	cmd = (char*)ft_memalloc(sizeof(char) * 4);
	sort(node, cmd);
	return (1);
}
