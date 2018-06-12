#include <stdio.h>
#include <stdlib.h>
void	ft_fprime(char *nbrstr)
{
	int nbr;
	int dv;

	dv = 2;
	nbr = atoi(nbrstr);
	if (nbr == 1)
		printf("1");
	if (nbr <= 0)
		return ;
	while (dv <= nbr)
	{
		if (nbr % dv == 0)
		{
			printf("%d", dv);
			if (nbr == dv)
				return ; 
			printf("*");
			nbr = nbr /dv;
			dv = 1;
		}
		dv++;
	}
}


int main(int arc, char **arv)
{
	if(arc == 2)
		ft_fprime(arv[1]);
	printf("\n");
	return (1);
}