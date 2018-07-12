/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstubbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 08:18:59 by pstubbs           #+#    #+#             */
/*   Updated: 2018/06/20 09:20:00 by pstubbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list *node1;
	t_list *node2;
	int temp;

	node1 = lst;
	node2 = node1;
	node2 = node2->next;

	while (node1->next && node2)
	{
		if (cmp(node1->data, node2->data) == 0 && node1->data != node2->data)
		{
			temp = node1->data;
			node1->data =  node2->data;
			node2->data = temp;
			sort_list(lst,cmp);
		}
		node2 = node2->next;
		node1 = node1->next;

	}
	return (lst);
}

