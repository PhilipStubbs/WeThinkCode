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


static char	*ft_returnzero_fd(int n)
{
	char	*p;
	if (n == 0)
	{
		p = (char*)ft_memalloc(2);
		if (!p)
			return (NULL);
		p[0] = '0';
		p[1] = '\0';
	}
	if (n == (-2147483647 -1))
	{
		p = ft_strnew(12);
		if (!p)
			return (NULL);
		ft_strcpy(p, "-2147483648\0");
	}
	return (p);
}
	
static char	*ft_itoa_fd(int n)
{
		char	*ret;
		int 	len;
		int		isneg;

		if (n == 0 || n == (-2147483647 -1))
			return (ft_returnzero_fd(n));
		len = ft_intlen(n);
		isneg = 0;
		if (n < 0)
		{
			isneg = 1;
			n = n * -1;
		}
		if (!(ret = (char*)ft_memalloc(len + 1)))
			return (NULL);
		ret[len + 1] = '\0';
		while(n != 0)
		{
			ret[--len] = n % 10 + 48;
			n = n / 10;
		}
		if (isneg)
			ret[0] = '-';
		return (ret);
}

void	ft_putnbr_fd(int n, int fd)
{	
	char	*p;
	p = ft_memalloc(ft_strlen(ft_itoa_fd(n)));
	p = ft_itoa_fd(n);
	ft_putstr_fd(p, fd);
	free(p);
}
