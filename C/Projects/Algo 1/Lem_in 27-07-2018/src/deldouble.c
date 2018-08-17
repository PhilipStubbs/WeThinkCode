/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deldouble.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstubbs <pstubbs@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 09:56:32 by pstubbs           #+#    #+#             */
/*   Updated: 2018/07/28 09:39:43 by pstubbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

void	deldouble(char ***str)
{
	int	i;

	i = 0;
	while (str[0][i] != NULL)
	{
		i++;
	}
	while (i >= 0)
	{
		free(str[0][i--]);
	}
	free(*str);
}