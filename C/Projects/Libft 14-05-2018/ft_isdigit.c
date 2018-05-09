#include <stdio.h>
#include <ctype.h>

int ft_isdigit(int c)
{
	if(c >= '0' && c <= '9')
	{
		return(1);
	}
	else
		return(0);
}


// int main () {
//    int var1 = 'h';
//    int var2 = '9';
    
//    if( ft_isdigit(var1) ) {
//       printf("var1 = |%c| is a digit\n", var1 );
//    } else {
//       printf("var1 = |%c| is not a digit\n", var1 );
//    }
   
//    if( ft_isdigit(var2) ) {
//       printf("var2 = |%c| is a digit\n", var2 );
//    } else {
//       printf("var2 = |%c| is not a digit\n", var2 );
//    }
   
//    return(0);
// }