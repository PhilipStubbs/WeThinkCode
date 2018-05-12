#include <stdio.h>
#include <string.h>
// #include "libft.h"

void	*ft_memset(void *str, int c, size_t n);

void	ft_bzero(void *str, int n)
{
	ft_memset(str, '\0', n);
}


// int main () 
// {
//    char str[50];


//    strcpy(str,"This is string.h library function");
//    puts(str);

//    ft_memset(str,'$' ,7);
//    puts(str); 
//    ft_bzero(str,7);
//    puts(str);
   
//    return(0);
// }