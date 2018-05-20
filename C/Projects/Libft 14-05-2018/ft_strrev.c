#include "libft.h"

char	*ft_strrev(char *p)
{
	int		len;
	char	*rp;
	int		i;

	i = 0;
	len = ft_strlen(p);
	rp = ft_memalloc(len);
	
	len = len - 1;
	while (len >= 0)
	{	
		rp[i] = p[len];
		i++;
		len--;
	}
	return(rp);
}