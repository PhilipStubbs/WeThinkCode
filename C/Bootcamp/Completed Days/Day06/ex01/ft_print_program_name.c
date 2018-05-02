/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstubbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 16:39:12 by pstubbs           #+#    #+#             */
/*   Updated: 2018/02/20 16:39:14 by pstubbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	char	*str;
	int		excess;

	str = argv[0];
	excess = 0;
	while (excess <= argc)
	{
		excess++;
	}
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
	return (0);
}
