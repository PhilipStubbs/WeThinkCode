#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	char *p1;
	char *p2;
	int i;
	int size;

	p1 = (char*)dest;
	p2 = (char*)src;
	i = 0;
	size = n;
	while(i <= size)
	{
		p1[i] = p2[i];
		i++;
	}
	return(p1);
}




// int main () {
//    char dest[] = "oldstring";
//    const char src[]  = "newstring";

//    printf("Before memmove dest = %s, src = %s\n", dest, src);
//    ft_memmove(dest, src, 9);
//    printf("After memmove dest = %s, src = %s\n", dest, src);

//    return(0);
// }