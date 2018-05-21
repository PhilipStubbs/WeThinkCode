
#include "libft.h"

int	ft_strcount(char const *s, char d)
{
	int		i;
	int		count;
	int		len;

	len = ft_strlen(s);
	i = 0;
	count = 0;
	while (i < len )
	{
		while (s[i] == d && s[i] != '\0')
			i++;
		while (s[i] != d && s[i] != '\0')
			i++;
		if (s[i - 1] != d)
			count++;
	}
	return (count);
}
