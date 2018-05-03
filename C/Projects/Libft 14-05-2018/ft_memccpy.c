#include <stdio.h>
#include <string.h>

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char ch;
	char *p1;
	char *p2;
	int i;
	int size;


	ch = c;
	p1 = (char*)dest;
	p2 = (char*)src;
	i = 0;
	size = n;
	while(i <= size)
	{	
		p1[i] = *p2;
		if(*p2 == ch)
			return(p2++);
		if(i == size && *p2 != ch)
			return(NULL);
		i++;
		p2++;
	}
	return(p1);
}


int main() {
	char *msg = "This is the string: not copied";

    char buffer[80];
    memset( buffer, '\0', 80 );
    printf("%p\n",memccpy( buffer, msg, ':', 80 ));
    printf( "%s\n", buffer );

    return(0);
  }