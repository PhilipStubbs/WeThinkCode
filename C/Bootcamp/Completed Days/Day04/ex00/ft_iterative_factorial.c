/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstubbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 13:37:21 by pstubbs           #+#    #+#             */
/*   Updated: 2018/02/16 14:06:44 by pstubbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int count;

	if (nb <= 0)
	{
		return (0);
	}
	count = 1;
	while (nb > 0)
	{
		count *= nb;
		nb--;
	}
	return (count);
}
