/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstubbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/17 09:28:09 by pstubbs           #+#    #+#             */
/*   Updated: 2018/02/17 09:28:12 by pstubbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int count;
	int input;

	if (nb <= 0)
	{
		return (0);
	}
	count = 1;
	while (nb >= 1)
	{
		count *= nb;
		if (count * ft_recursive_factorial(nb - 1) == 0)
		{
			return (1);
		}
		else
		{
			return (count * ft_recursive_factorial(nb - 1));
		}
	}
	return (count);
}
