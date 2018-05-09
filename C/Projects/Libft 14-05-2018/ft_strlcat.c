#include <stdio.h>
#include <string.h>

int ft_strlen(const char *str);

size_t ft_strlcat(char *dest, const char *src, size_t len )
{
	char *p1;
	unsigned int i;
	unsigned int e;
	unsigned int size;

	p1 = (char*)src;
	size = (ft_strlen(src) + ft_strlen(dest));
	i = 0;
	e = 0;
	while(dest[i] != '\0')
		i++;
	while(e < len && p1[e] != '\0')
	{
		dest[i++] = p1[e++];
	}
	dest[i] = '\0';
	return(len + size);
}


// int main () {
//    char src[50], dest[50];

//    strcpy(src,  "This is source");
//    strcpy(dest, "This is destination");

//    ft_strlcat(dest, src, 2);

//    printf("Final destination string : |%s|", dest);
   
//    return(0);
// }