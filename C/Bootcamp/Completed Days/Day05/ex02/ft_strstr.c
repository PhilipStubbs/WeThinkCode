/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstubbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 17:50:41 by pstubbs           #+#    #+#             */
/*   Updated: 2018/02/19 17:50:42 by pstubbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int strind;
	int findind;

	strind = 0;
	while (str[strind] != '\0')
	{
		findind = 0;
		while (to_find[findind] == str[strind + findind])
		{
			if (to_find[findind + 1] == '\0')
			{
				return (str + strind);
			}
			findind++;
		}
		strind++;
	}
	return (0);
}
