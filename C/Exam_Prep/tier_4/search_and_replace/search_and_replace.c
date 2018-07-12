/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstubbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 08:07:59 by pstubbs           #+#    #+#             */
/*   Updated: 2018/06/13 08:21:43 by pstubbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_search_and_replace(char *str, char *sear, char *rep)
{	
	int i;

	i = 0;
	if (sear[1] != '\0' || rep[1] != '\0')
		return ;
	while (str[i])
	{
		if (str[i] == *sear)
			ft_putchar(*rep);
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}

int	main(int arc, char **arv)
{
	if (arc == 4)
		ft_search_and_replace(arv[1], arv[2], arv[3]);
	write(1, "\n", 1);
	return (1);
}
