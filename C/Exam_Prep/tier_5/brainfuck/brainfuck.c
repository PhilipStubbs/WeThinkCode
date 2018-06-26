// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   brainfuck.c                                        :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: pstubbs <marvin@42.fr>                     +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2018/06/20 09:26:00 by pstubbs           #+#    #+#             */
/*   Updated: 2018/06/20 10:13:27 by pstubbs          ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

char	*loop(char *str, int way)
{
	int	s;

	s = 0;
	while (1)
	{
		if (*str == '[')
			s++;
		else if (*str == ']')
			s--;
		if (s == 0)
			return (str);
		str += way;
	}
	return (NULL);
}

void	unbrainfuck(char *str, char *buff)
{	
	while (*str != '\0')
	{
		if (*str == '>')
			buff++;

		if (*str == '<')
			buff--;

		if (*str == '+')
			(*buff)++;

		if (*str == '-')
			(*buff)--;

		if (*str == '.')
			write(1, buff, 1);

		if (*str == '[' && !(*buff))
			str = loop(str, 1);

		if (*str == ']' && (*buff))
			str = loop(str, -1);
		str++;
	}
}


int	main(int arc, char **arv)
{
	char	buff[2048];
	int		i;

	if (arc == 2)
	{
		i = 0;
		while(i < 2048)
		{
			buff[i++] = 0;
		}
		unbrainfuck(arv[1], buff);
	}
	else
	write(1, "\n", 1);

	return (1);
}


