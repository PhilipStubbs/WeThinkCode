#include "libft.h"

int ft_tolower(int c)
{
	if(c >= 65 && c <= 90)
		return(c + 32);
	else
		return(c);
}



// int main () {
//    int i = 0;
//    char str[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ\n";
   
//    while(str[i]) {
//       putchar (ft_tolower(str[i]));
//       i++;
//    }
   
//    return(0);
// }