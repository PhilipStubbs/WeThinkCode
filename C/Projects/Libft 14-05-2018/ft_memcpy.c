#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int size;
	int i;
	char *p1;
	char *p2;

	size = n;
	i = 0;
	p1 = (char*)dest;
	p2 = (char*)src;
	while(i <= size)
	{
		p1[i] = p2[i];
		i++;
	}
	return(dest);
}



// int main () {
//    const char src[50] = "This is a test!";
//    char dest[50];


//    ft_memcpy(dest, src, strlen(src)+1);

//    printf("After memcpy dest = %s\n", dest);
   
//    return(0);
// }