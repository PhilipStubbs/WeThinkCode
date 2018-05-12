#include <stdio.h>
#include <string.h>

void	*ft_memset(void *str, int c, size_t n)
{
	char *p;

	p = (char*)str;
	while(n--)
	{
		p[n] = c;
	}
	return(p);
}



// int main () 
// {
//    char str[50];


//    strcpy(str,"This is string.h library function");
//    puts(str);

//    memset(str,'$',7);
//    puts(str);
   
//    return(0);
// }