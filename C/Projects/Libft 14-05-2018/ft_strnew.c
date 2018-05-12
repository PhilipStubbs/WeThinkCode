#include <unistd.h>
#include "libft.h"

char *ft_strnew(size_t size)
{
	char *p;
	if(size == 0)
	{
		return(p=NULL);
	}
	p =(char*)malloc(size);
	ft_memset(p, '\0', size);

	return(p);
}