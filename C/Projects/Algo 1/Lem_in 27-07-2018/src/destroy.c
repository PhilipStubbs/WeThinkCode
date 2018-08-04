/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstubbs <pstubbs@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 09:51:07 by pstubbs           #+#    #+#             */
/*   Updated: 2018/07/30 08:28:31 by pstubbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

void	destroy(t_hold **node)
{
	if ((*node)->str)
		free((*node)->str);
	if ((*node)->start)
	{
		free((*node)->start->name);
		free((*node)->start);
	}
	if ((*node)->end)
	{
		free((*node)->end->name);
		free((*node)->end);
	}
	exit(1);
}

void	destroyerror(t_hold **node)
{
	if ((*node)->rawstr)
		free((*node)->rawstr);
	if ((*node)->str)
		free((*node)->str);
	if ((*node)->start)
	{
		free((*node)->start->name);
		free((*node)->start);
	}
	if ((*node)->end)
	{
		free((*node)->end->name);
		free((*node)->end);
	}
	free((*node)->rawlinks);
	free((*node)->room);
	ERROR;
	exit(1);
}
