#include <stdlib.h>
#include <stdio.h>

void	ft_pgcd(int nbr1, int nbr2)
{
	int dv;
	int temp;

	dv = 1;
	temp = 1;
	if ( nbr1 <= 0 || nbr2 <= 0)
		return ;
	while (dv <= nbr1 && dv <= nbr2)
	{
		if (nbr1 % dv == 0 && nbr2 % dv == 0)
		{
			if (dv > temp)
				temp = dv;
		}
		dv++;
	}
	printf ("%d", temp);
}



int main(int arc, char **arv)
{
	if (arc == 3)
		ft_pgcd(atoi(arv[1]), atoi(arv[2]));
	printf("\n");
	return (1);
}