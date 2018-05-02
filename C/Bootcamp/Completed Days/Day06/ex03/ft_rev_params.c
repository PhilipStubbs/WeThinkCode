/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstubbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 07:27:57 by pstubbs           #+#    #+#             */
/*   Updated: 2018/02/21 07:28:00 by pstubbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int		index;
	char	*ptr;

	index = 0;
	while (index <= argc)
	{
		index++;
	}
	index = index - 2;
	while (index != 0)
	{
		ptr = argv[index];
		while (*ptr != '\0')
		{
			ft_putchar(*ptr);
			ptr++;
		}
		ft_putchar('\n');
		index--;
	}
	return (0);
}
