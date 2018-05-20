
#include "libft.h"

int	ft_strcount(char const *s, char d)
{
	int		i;
	int		count;
	int		len;

	len = ft_strlen(s);
	i = 0;
	while (s[i])
	{
		while (s[i] == d)
			s[i++];
		while (s[i] != d)
			s[i++];
		count++;
	}
	return (count);
}

char	*ft_strapstraho(char const *s, char c)
{
	char	*p;
	int		i;

	i = 0;
	while (*s == c)
		*s++;
	while (s[i] != c)
		i++;
	p = ft_memalloc(i);
	if (p == NULL)
		return(NULL);
	i = 0;
	while (*s != c)
		p[i++] = *s++;
	return (p);
}

char	**ft_strsplit(char const *s, char c)
{
	int		words;
	int		i;
	char	**cp;
	char	*temp

	words = ft_strcount(s, c);
	cp = ft_memalloc(words);
	i = 0;
	while(i <= words)
	{
		temp = ft_strapstraho(s, c);
		if (temp == NULL)
			return(NULL);
		cp[i][0] = &temp;
		i++;
	}
}