
#include "libft.h"

char	*ft_strpull(char *s, char c)
{
	char	*p;
	int		i;

	i = 0;
	while (*s == c)
		s++;
	while (s[i] != c)
		i++;
	p = ft_memalloc(i);
	if (p == NULL)
		return(NULL);
	i = 0;
	while (*s != c)
	{
		p[i++] = *s;
		s++;
	}
	return (p);
}
