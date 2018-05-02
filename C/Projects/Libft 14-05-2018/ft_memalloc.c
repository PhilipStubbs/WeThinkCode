#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void	*ft_memset(void *str, int c, size_t n)
{
	int i;
	int id;
	unsigned char *ucp;

	ucp = str;
	id = n;
	i = 0;
	while(i <= id)
	{
		ucp[i] = c;
		printf("%c", ucp[i]);
		i++;
	}
	return(ucp);

}

void *ft_memalloc(size_t size)
{	
	size_t *p;
	// size_t i;

	// i = 0;
	if (size <= 0) //dont forget to check for things that arent ints
	{
		return (NULL);
	}
	else
	{
		p = malloc(size);
		ft_memset(p, '0', size);
		return(p);
	}
	
}

int main()
{	
	size_t *p = ft_memalloc(5);
	// int a = ft_memalloc(5)
	printf("%ln", p);

	return(1);
}