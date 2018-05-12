#include "libft.h"

size_t ft_strlen(const char *str)
{
	int i;
	size_t r;
	char *p1;

	p1 = (char*)str;
	i = 0;
	while(p1[i] != '\0')
		i++;
	return(r = i);
}


// int main () {
//    char str[50];
//    int len;

//    strcpy(str, "This is a test");

//    len = ft_strlen(str);
//    printf("Length of |%s| is |%d|\n", str, len);
   
//    return(0);
// }