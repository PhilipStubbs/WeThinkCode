#include <unistd.h>

char *ft_strnew(size_t size)
{
	char *p;

	p =(char*)malloc(size);
	ft_memset(p, '\0', size);

	return(p);
}