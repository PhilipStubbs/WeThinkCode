#include <stdlib.h>

// #include "libft.h"
// void	*ft_memalloc(int size);
int ft_strlen(const char *str);

char *strdup(const char *src)
{
	char *p1;
	char *rstr;
	int i;
	int size;

	p1 =(char*)src;
	i = 0;
	size = ft_strlen(src);
	rstr = malloc(size);
	while(i <= size)
	{
		rstr[i] = p1[i];
		i++;
	}
	return(rstr);
}

// int main()
// {

// 	return(0);
// }