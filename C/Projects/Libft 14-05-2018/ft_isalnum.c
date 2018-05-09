#include <stdio.h>
#include <ctype.h>

int ft_isalnum(int c)
{
	if((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return(1);
	}
	else
		return(0);
}

// int main () {
//    int var1 = 'd';
//    int var2 = '2';
//    int var3 = '\t';
//    int var4 = ' ';
    
//    if( ft_isalnum(var1) ) {
//       printf("var1 = |%c| is alphanumeric\n", var1 );
//    } else {
//       printf("var1 = |%c| is not alphanumeric\n", var1 );
//    }
   
//    if( ft_isalnum(var2) ) {
//       printf("var2 = |%c| is alphanumeric\n", var2 );
//    } else {
//       printf("var2 = |%c| is not alphanumeric\n", var2 );
//    }
   
//    if( ft_isalnum(var3) ) {
//       printf("var3 = |%c| is alphanumeric\n", var3 );
//    } else {
//       printf("var3 = |%c| is not alphanumeric\n", var3 );
//    }
   
//    if( ft_isalnum(var4) ) {
//       printf("var4 = |%c| is alphanumeric\n", var4 );
//    } else {
//       printf("var4 = |%c| is not alphanumeric\n", var4 );
//    }
//    return(0);
// }