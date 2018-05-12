
#include "libft.h"

char *ft_strncat(char *dest, const char *src, size_t n)
{
	//add support for neg numbers.
	char *p1;
	int i;
	int e;
	int size;
	int max;

	p1 = (char*)src;
	size = ft_strlen(src) + ft_strlen(dest);
	i = 0;
	e = 0;
	max = n;
	while(dest[i] != '\0')
		i++;
	while(i <= size && p1[e] != '\0' && e <max)
	{
		dest[i] = p1[e];
		i++;
		e++;
	}
	dest[i] = '\0';
	return(dest);
}

// int main () {
//    char src[50], dest[50];

//    strcpy(src,  "This is source");
//    strcpy(dest, "This is destination");

//    strncat(dest, src, 0);

//    printf("Final destination string : |%s|", dest);
   
//    return(0);
// }