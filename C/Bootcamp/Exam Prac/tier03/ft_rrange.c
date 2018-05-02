
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int *ft_rrange(int start, int end)
{

	int s = start;
	int e = end;
	int size = 1;
	int *range;
	int i = 0;

	if(s < e)
	{
		while (s != e)
		{
			size++;
			s++;
		}
	}

	if(s > e)
	{
		while (s != e)
		{
			size++;
			s--;
		}
	}

	range = (int*)malloc(size);

	if(start < e)
	{

		while (e >= (start))
		{
			printf("inside loop %d. start = %d \n",e,start );
			range[i] = e;
			e--;
			i++;
		}
	}
	
	if(start > e)
	{
		while (e <= (start))
		{
			printf("start > e = inside loop %d. start = %d \n",e,start);
			range[i] = e;
			e++;
			i++;
		}
	}

	if(s == e)
	{
		range[i] = e;
	}
	// printf("%d\n", size);

	return(range);
}


int main(void)
{
	int i = 0;
	int *p;
	p = ft_rrange(0, s0);
	// printf("this is i %d\n", p[i]);
	while (i <= 0)
	{
		printf("%d\n",p[i++]);
	}
		

	return(0);
}






