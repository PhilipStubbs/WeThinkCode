
#include <unistd.h>
#include <stdio.h>

int	max(int *tab, unsigned int len)
{	
	int i = 0;
	int ilen = len;
	int biggest = 0;

	if (len == 0)
		return(0);
	else
	{
		while (i < ilen)
		{
			if (tab[i] > biggest)
				biggest = tab[i];
			i++;
		}
	}
	return(biggest);
}

int main()
{
	int arry[] = {1,2,3,4,50,6,7,8,9};

	printf("%d\n", max(arry, 9));
	return(0);
}
