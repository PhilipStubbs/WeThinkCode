
#include "libft.h"

int	ft_wordlen(char const *s, char d)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (s[i] == d && s[i] != '\0')
		i++;
	while (s[i] != d )
	{
		while (s[i] != d && s[i] != '\0')
		{
			count++;
			i++;
		}			
	}
	return (count);
}
