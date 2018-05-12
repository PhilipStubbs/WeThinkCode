#include <stdlib.h>
#include "libft.h"
void	ft_memdel(void **ap);

void	st_strdel(char **as)
{
	ft_memdel(**as);
}