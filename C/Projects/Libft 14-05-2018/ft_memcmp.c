#include <stdio.h>
#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char *p1;
	char *p2;

	p1 = (char*)s1;
	p2 = (char*)s2;
	while(n--)
	{
		if(*p1 == *p2)
		{
			p1++;
			p2++;
		}
		else
			return(*p1 - *p2);
	}
	return(0);
}

int main()
{
	char str[] = "h";
	char str2[] = "h";

	printf("%d\n", ft_memcmp(str, str2, 5));
	printf("%d\n", memcmp(str, str2, 5));
	return(1);
}