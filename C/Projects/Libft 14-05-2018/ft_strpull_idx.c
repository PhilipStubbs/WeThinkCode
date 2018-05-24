#include "libft.h"

char	*ft_strpull_idx(const char *s, char c, unsigned int start)
{
	int 	i;
	int		wordlen;

	i = 0;
	while (i < (int)start)
	{
		s++;
		i++;
	}
	wordlen = ft_wordlen((s), c);
	while (*s == c)
	{
		i++;
		s++;
	}
	return (ft_strsub(s, 0, wordlen));
}
