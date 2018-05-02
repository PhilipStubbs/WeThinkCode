/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstubbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 17:28:48 by pstubbs           #+#    #+#             */
/*   Updated: 2018/02/27 17:28:50 by pstubbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *newdata;

	newdata = ft_create_elem(data);
	while ((*begin_list)->next != NULL)
	{
		(*begin_list) = (*begin_list)->next;
	}
	(*begin_list)->next = newdata;
}
