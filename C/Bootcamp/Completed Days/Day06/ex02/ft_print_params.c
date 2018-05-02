/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstubbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 07:44:20 by pstubbs           #+#    #+#             */
/*   Updated: 2018/02/21 07:44:22 by pstubbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int		index;
	char	*str;

	index = 1;
	while (index <= (argc - 1))
	{
		str = argv[index];
		while (*str != '\0')
		{
			ft_putchar(*str);
			str++;
		}
		ft_putchar('\n');
		index++;
	}
	return (0);
}
