/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstubbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 16:08:17 by pstubbs           #+#    #+#             */
/*   Updated: 2018/02/22 16:08:20 by pstubbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*extraampm(int hour, int plustime)
{
	char *ampm;

	ampm = "A.M.";
	if (hour >= 12 && hour <= 24)
		ampm = "P.M.";
	if (hour == 24)
		ampm = "A.M.";
	if (hour == 12)
		ampm = "P.M.";
	if (plustime == 12)
		ampm = "P.M.";
	if (hour == 24)
		ampm = "A.M.";
	if (plustime == 12 && hour == 23)
		ampm = "A.M.";
	return (ampm);
}

void	ft_takes_place(int hour)
{
	int		inputtime;
	int		plustime;
	char	*ampm;

	if (hour >= 1 && hour <= 11)
	{
		inputtime = hour;
	}
	if (hour >= 12 && hour <= 24)
	{
		inputtime = hour - 12;
	}
	plustime = inputtime + 1;
	ampm = extraampm(hour, plustime);
	if (hour == 24 || hour == 12 || hour == 0)
	{
		inputtime = 12;
		plustime = 1;
	}
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	printf("%d.00 %s AND %d.00 ", inputtime, ampm, plustime);
	ampm = extraampm(hour, plustime);
	printf("%s \n", ampm);
}
