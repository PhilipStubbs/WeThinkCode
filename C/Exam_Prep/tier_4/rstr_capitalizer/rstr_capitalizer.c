/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstubbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 11:38:12 by pstubbs           #+#    #+#             */
/*   Updated: 2018/06/13 12:03:53 by pstubbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void	ft_putchar(char c)
{
	write( 1, &c, 1);	
}
void	ft_putstr(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

void	ft_strtolower(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
}

void	ft_cap(char *str)
{
	int	i;

	i = 0;
	ft_strtolower(str);
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z'  && (str[i + 1] == ' ' || str[i + 1] == '	' || str[i + 1] == '\0'))
			str[i] = str[i] - 32;
		i++;
	}
	ft_putstr(str);
}

int main(int arc, char **arv)
{
	int i;

	i = 1;
	if (arc > 1)
		while (i < arc)
		{
			ft_cap(arv[i++]);
			write(1, "\n", 1);
		}
	else
		write(1, "\n", 1);
	return (1);
}
