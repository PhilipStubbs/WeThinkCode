
#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int		words;
	int		i;
	char	**cp;
	char	*temp;
	char	*nonconst;

	nonconst = ft_strdup(s);
	words = ft_strcount(s, c);
	cp = (char**)malloc(words);
	i = 0;
	while(i <= words)
	{
		temp = ft_strpull(nonconst, c);
		if (temp == NULL)
			return(NULL);
		cp[i][0] = *temp;
		i++;
	}
	return(cp);
}