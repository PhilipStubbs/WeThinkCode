#include <stdio.h>
#include <string.h>

// char *ft_strcpy(char *dest, const char *src);
// void	*ft_memset(void *str, int c, size_t n);

char *ft_strncpy(char *dest, const char *src, size_t n)
{
	char *p1;
	int i;
	int size;

	p1 = (char*)src;
	i = 0;
	size = n;
	while(i < size)
	{
		dest[i] = p1[i];
		i++;
	}
	return(dest);
}



// int main () {
//    char src[40];
//    char dest[12];
  
//    memset(dest, '\0', sizeof(dest));
//    strcpy(src, "This is tutorialspoint.com");
//    ft_strncpy(dest, src, 10);

//    printf("Final copied string : %s\n", dest);
   
//    return(0);
// }