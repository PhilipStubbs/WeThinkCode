#include <stdio.h>
#include <string.h>

char *ft_strchr(const char *str, int c)
{	
	char *p1;
	unsigned char ch;

	p1 = (char*)str;
	ch = c;
	while(*p1 != ch)
		{
			if(*p1 == '\0')
				return(p1 = NULL);
			p1++;
		}
	return (p1);
}




// int main () {
//    const char str[] = "This is a test";
//    const char ch = 'e';
//    char *ret;

//    ret = ft_strchr(str, ch);

//    printf("String after |%c| is - |%s|\n", ch, ret);
   
//    return(0);
// }