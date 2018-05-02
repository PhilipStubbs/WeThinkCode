/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstubbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 07:53:14 by pstubbs           #+#    #+#             */
/*   Updated: 2018/02/19 07:53:16 by pstubbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*abrtout(int destind, int scrind, char *dest, char *src)
{
	int countscr;

	countscr = 0;
	if (destind >= scrind)
	{
		while (countscr <= scrind)
		{
			dest[countscr] = src[countscr];
			countscr++;
		}
		return (dest);
	}
	else
	{
		return (NULL);
	}
}

char	*ft_strcpy(char *dest, char *src)
{
	int destind;
	int scrind;

	destind = 0;
	scrind = 0;
	while (dest[destind] != '\0')
	{
		destind++;
	}
	while (src[scrind] != '\0')
	{
		scrind++;
	}
	return (abrtout(destind, scrind, dest, src));
}
