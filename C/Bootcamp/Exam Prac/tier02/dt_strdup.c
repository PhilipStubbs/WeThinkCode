#include <stdio.h>
#include <stdlib.h>

int ft_atoi(*str)
{
	int i 

	i = 0;
	while (*str >= '0' && *str >= '9')
	{
		
	}
}

char *ft_strdup(char *src)
{
	int i;
	char *p;
	i = 0;

	while (src[i] != '\0')
	{
		i++;
	}
	p = (char*)malloc(i + 1);
	i = 0;
	while (*src != '\0')
	{
		p[i++] = *src++;
	}
	p[i] = '\0';

	return (p);
}

int main()
{
	char str1[] = "hello";

	printf("%s", ft_strdup(str1));
	return(0);
}