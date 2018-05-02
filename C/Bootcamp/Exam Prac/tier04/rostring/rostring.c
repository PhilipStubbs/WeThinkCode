/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/10 11:35:45 by exam              #+#    #+#             */
/*   Updated: 2018/03/10 13:05:26 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>


void ft_putchar(char c)
{
	write(1, &c ,1);
}


int main(int arc, char **arv)
{
	char *str;
	int count = 0;
	int i = 0;
	int st = 0;
	int en = 0;
	int last = 0;
	int secword = 0;
	int p = 0;

	if(arc < 2)
	{
	 ft_putchar('\n');
	}

	if(arc == 2) 
	{
		str = arv[1];
	
		while(str[i] == ' ' || str[i] == '	')
		{
			i++;
		}
		st = i+1;
	
		while(str[i] != ' ' && str[i] != '\0')
		{
		i++;
		}
		en = i;
		
		if ( str[i] != '\0')
		{
			while((str[i] == ' ' || str[i] == '	') && str[i] != '\0')
			{
				i++;
			}
			if(str[i] != ' ' && str[i] != '	' && str[i] != '\0')
			{
				count++;				
			}
			secword = i;
		}

			while(str[last] != '\0')
			{
				last++;
			}
			
			while(str[last] == ' ' || str[last] == '	' || str[last] == '\0')
			{
				last--;
			}


		// printf("%d and %c\n", last, str[last]);
		i = 0;
		while(str[i])
		{
			if(str[i] != ' ' && str[i] != '\t' && i >= secword )
			{

				ft_putchar(str[i]);
			}

			if(str[i] != '	' && str[i] != ' ' && (str[i+1] == ' ' || str[i+1] == '	') && i > secword && i < last)
			{
				count++;
				ft_putchar(' ');
			}

		i++;
		}
		st = st -1;
		if ((count > 0))
			ft_putchar(' ');
		while(st != en && secword != 0)
		{
 			ft_putchar(str[st]);
 			st++;
		}
		
		ft_putchar('\n');
	}


	 if (arc > 2)
	{
		p = 2;
		while ( p <= (arc-1))
		{
		str = arv[p];
		i = 0;

		while(str[i])
			{

				if(str[i] != ' ' && str[i] != '	')
				{
					ft_putchar(str[i]);
				}

				if(str[i] != '	' && str[i] != ' ' && (str[i+1] == ' ' || str[i+1] == '	' || str[i+1] == '\n') )
				{
					ft_putchar(' ');
				}
					
			i++;	
			}	


		p++;
		}
		
		i = 0;
		str = arv[1];
		while(str[i])
		{
			while(str[st] == ' ' || str[st] == '	')
			{
				st++;
			}


			if(str[i] != '	' && str[i] != ' ')
			{
				ft_putchar(str[i]);
			}
			if(str[i] != '	' && str[i] != ' ' && (str[i+1] == ' ' || str[i+1] == '	') )
			{
			ft_putchar(' ');
			}
		i++;
		}



	}



	

















	return(0);
}
