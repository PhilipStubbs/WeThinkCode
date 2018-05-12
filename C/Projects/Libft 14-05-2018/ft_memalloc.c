#include <stdlib.h>
#include "libft.h"

void *ft_memalloc(size_t size)
{	
	void *p;

	if ((p = (void*)malloc(size)) == NULL) 
	{
		return (NULL);
	}
	else
	{
		p = (void*)malloc(size);
		ft_memset(p, '\0', size);
		return(p);
	}
}

// int main()
// {	
	// size_t *p = ft_memalloc(5);
	// int a = ft_memalloc(5)
	// printf("%ln", p);

// 	return(1);
// }