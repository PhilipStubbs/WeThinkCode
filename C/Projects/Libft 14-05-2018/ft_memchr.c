#include <stdio.h>
#include <string.h>

void *ft_memchr(const void *src, int c, size_t n)
{
	char *p1;
	unsigned char ch;
	int i;
	int size;

	p1 = (char*)src;
	ch = c;
	i = 0;
	size = n;
	while(i <= size)
	{
		if (*p1 == ch)
			return(p1);
		p1++;
		i++;
	}
	return(NULL);
}



// int main () {
//    const char str[] = "This is a test";
//    const char ch = 's';
//    char *ret;

//    ret = memchr(str, ch, strlen(str));

//    printf("String after |%c| is - |%s|\n", ch, ret);

//    return(0);
// }