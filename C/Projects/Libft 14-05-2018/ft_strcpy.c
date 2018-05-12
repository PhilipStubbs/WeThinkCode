#include "libft.h"


char *ft_strcpy(char *dest, const char *src)
{
	char *p1;
	int i;

	p1 = (char*)src;
	i = 0;
	while(p1[i] != '\0')
	{
		dest[i] = p1[i];
		i++;
	}
	return(dest);
}



// int main () {
//    char src[40];
//    char dest[100];
  
//    ft_memset(dest, '\0', sizeof(dest));
//    ft_strcpy(src, "This is a test");
//    ft_strcpy(dest, src);

//    printf("Final copied string : %s\n", dest);
   
//    return(0);
// }