


#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int count = 0;
	int s = start;
	int e = end;
	int i = 0;

	if(s <= e) 
	{
		while(s != e)
		{
			count++;
			s++;
		}
	}
	else if(s > e)
	{
		while(s != e)
		{
			count++;
			s--;
		}
	}
	else
	{
		count = 1;
	}	
	int *arry;
	arry = (int*)malloc(count);
	count = start;
	if(start < end) 
	{
		while(count != (end+1))
		{
			
			arry[i++] = count;
			count++;
		}
	}
	else if(start > end)
	{
		while(count != (end+1))
		{
			arry[i++] = count;
			count--;
		}
	}
	else
	{
		arry[i] = count;
	}

	return(arry);
}

int main()
{
	int i = 0;
	int *p = ft_range(1, 1);

	while (i <= 0)
	{
	printf("%d", p[i++]);
	printf(" ");
	}
	return(0);
}