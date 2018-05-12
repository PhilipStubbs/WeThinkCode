#include "libft.h"

int ft_strcmp(const char *s1, const char *s2)
{
	int i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

// int main()
// {
// 	char str[] = "x";
// 	char str2[] = "hj";

// 	printf("%d\n", ft_strcmp(str, str2));
// 	printf("%d", strcmp(str, str2));
// 	return(1);
// }