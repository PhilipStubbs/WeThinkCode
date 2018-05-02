/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstubbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 19:34:01 by pstubbs           #+#    #+#             */
/*   Updated: 2018/02/15 19:42:38 by pstubbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int *tempa;
	int *tempb;
	int divide;
	int div;

	tempa = a;
	tempb = b;
	divide = ((*a) / (*b));
	div = ((*a) % (*b));
	*a = divide;
	*b = div;
}
