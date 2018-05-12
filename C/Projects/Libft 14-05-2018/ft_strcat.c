#include "libft.h"

char *ft_strcat(char *dest, const char *src)
{
	char *p1;
	int i;
	int e;
	int size;

	p1 = (char*)src;
	size = (ft_strlen(src) + ft_strlen(dest));
	i = 0;
	e = 0;
	while(dest[i] != '\0')
		i++;
	while(i <= size && p1[e] != '\0')
	{
		dest[i] = p1[e];
		i++;
		e++;
	}
	dest[i] = '\0';
	return(dest);
}






// int main () {
//    char src[50], dest[10];

//    ft_strcpy(src,  "This is source");
//    ft_strcpy(dest, "This is destination");

//    ft_strcat(dest, src);

//    printf("Final destination string : |%s|", dest);
   
//    return(0);
// }