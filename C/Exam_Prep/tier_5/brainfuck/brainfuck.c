#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1 , &c, 1);
}

static	void	ft_clean(char *bf, int shifts)
{	
	int i;

	i = 0;
	while (i <= shifts)
	{
		bf[i++] = 0;
	}
}

void	ft_printbits(char *bf,int shifts)
{
	int i;

	i = 0;
	while(i <= shifts)
	{
		printf("%d : %d\n",i, bf[i] );
		i++;
	}
}

int	ft_strlen(char	*p)
{	
	int	i = 0;

	while (p[i])
		i++;
	return (i);
}


int main(int arc, char **arv)
{	
	char		*bf;
	char		*p;
	int			i;
	int			shifts;
	int			j;
	int 		tempa;
	int			tempb;
	int			loopi;
	int			lastloop;
	// int 		e;

	shifts = 0;
	if(arc == 1)
	{
		write(1 , "\n", 1);
		return(0);
	}
	i = 0;
	p = arv[1];

	while (p[i])
	{
		if (p[i] == '>')
			shifts++;
		i++;
	}

	// printf("%d\n", shifts);
	bf = (char*)malloc(shifts);
	ft_clean(bf, shifts);
	

	i = 0;
	j = 0;
	
	while (p[i] != '\0')
	{
		if (p[i] == '+')
			bf[j] = bf[j] + 1;

		if (p[i] == '-')
			bf[j] = bf[j] - 1;
		
		if (p[i] == '>')
			j++;

		if (p[i] == '<')
			j--;

		if (p[i] == '.')
			ft_putchar(bf[j]);
		
		if (p[i] == '[')
		{	
			tempa = i;
			lastloop = i;
			while (p[lastloop] != ']')
				lastloop++;

			// e = i;
			while (p[i] != ']')
			{
				while (p[tempa] == '+')
					tempa--;
				loopi = tempa;

				while(loopi > 0)
				{	
					tempb = tempa;
					while (tempb < lastloop)
					{
						if (p[tempb] == '+')
							bf[j] = bf[j] + 1;

						if (p[tempb] == '-')
							bf[j] = bf[j] - 1;
						
						if (p[tempb] == '>')
							j++;

						if (p[tempb] == '<')
							j--;

						if (p[tempb] == '.')
							ft_putchar(bf[j]);
						tempb++;
					}
					loopi--;
				}
				i = lastloop;
			}
		}
	i++;
	}	


	// ft_printbits(bf, shifts);



	return (1);
}