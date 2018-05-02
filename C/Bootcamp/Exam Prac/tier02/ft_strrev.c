#include <stdio.h>


char	*ft_strrev(char *str)
{

	int i = 0;
	int e = 0;
	while (str[i])
	{
		i++;
	}
	char arry[i];

	while(str[e])
	{
		arry[e] = str[e];
		e++;
	}
	// arry[e] = '\0';
	e = 0;
	while(i >= 0)
	{
		str[e] = arry[i-1];
		e++;
		i--;
	}
	// str[e+1] = '\0';

	return(str);


}

int main()
{
	char str[] = "987654321";
	printf("%s",ft_strrev(str));
	return(0);
}