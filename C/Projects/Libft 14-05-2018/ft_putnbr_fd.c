/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstubbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 08:15:21 by pstubbs           #+#    #+#             */
/*   Updated: 2018/05/22 08:15:22 by pstubbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


static void		ft_returnzero_fd(int n, char *buff)
{
	if (n == 0)
	{
		buff[0] = '0';
		buff[1] = '\0';
	}
	if (n == (-2147483647 -1))
	{
		ft_strcpy(buff, "-2147483648\0");
	}
}
	
static void		ft_itoa_fd(int n, char *buff)
{
		int 	len;
		int		isneg;

		if (n == 0 || n == (-2147483647 -1))
			ft_returnzero_fd(n, buff);
		len = ft_intlen(n);
		isneg = 0;
		if (n < 0)
		{
			isneg = 1;
			n = n * -1;
		}

		buff[len + 1] = '\0';
		while(n != 0)
		{
			buff[--len] = n % 10 + 48;
			n = n / 10;
		}
		if (isneg)
			buff[0] = '-';
}

void	ft_putnbr_fd(int n, int fd)
{	
	char	buff[12];
	
	ft_bzero(buff, 12);
	ft_itoa_fd(n, buff);	
	ft_putstr_fd(buff, fd);
}
