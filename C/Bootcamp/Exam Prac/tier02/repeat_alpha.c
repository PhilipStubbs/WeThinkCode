/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstubbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 09:24:59 by pstubbs           #+#    #+#             */
/*   Updated: 2018/03/01 09:25:01 by pstubbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
// void	ft_repeat_alpha()

int main(int argc, char **argv)
{

	char arry[26];
	// char caparry[26];

	int i;
	int ind;
	char a;
	int count = 0;

	a = 'a';
	i = 0;
	while (a <= 'z')
	{
		arry[i] = a;
		i++;
		a++;
	}
	i = 0;
	if (argc == 2)
	{
		while(argv[1][i] != '\0')
		{
			ind = 0;

			while (arry[ind] != '\0')
			{
				if(arry[ind] == argv[1][i] || (arry[ind]-32) == argv[1][i])
				{	
					count = 0;
					while(count <= ind)
					{
						a = argv[1][i];
						write(1, &a,1);
						count++;
					}
				}

				ind++;
			}
				if(!(argv[1][i] >= 'a' && argv[1][i] <= 'z') && !(argv[1][i] >= 'A' && argv[1][i] <= 'Z')  )
				{
					a = argv[1][i];
					write(1, &a,1);
				}

			i++;
		}

	}
	else
	{
		write(1, "\n",1);
		return (0);
	}

	return(0);
}