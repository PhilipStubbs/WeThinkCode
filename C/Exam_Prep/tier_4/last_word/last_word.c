/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstubbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 08:47:10 by pstubbs           #+#    #+#             */
/*   Updated: 2018/06/13 09:18:33 by pstubbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_last_word(char *str)
{
	int i;
	int len;
	
	i = 0;
	len = 0;
	while (str[len])
		len++;
	i = len;
	while (i >= 0 && (str[i] == ' ' || str[i] == '	' || str[i] == '\0'))
		i--;
	while (i > 0 && str[i] != ' ' && str[i] != '	')
		i--;
	if (i != 0)
		i++;
	printf("%d\n", i);
	while ( i < len)
	{
	printf("%d\n", i);
	
		ft_putchar(str[i++]);
	}
	}

int	main(int arc, char **arv)
{
	
	if(arc == 2)
		ft_last_word(arv[1]);
	write(1, "\n", 1);
	return (1);
}
