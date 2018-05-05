

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_atoi(const char *str)
{
	int i = 0;
	int in = 0;

	if(str[in] == '-')
	{

		in++;
	}

	while(str[in] >= '0' && str[in] <= '9')
	{
		i = (i *10) + (str[in] - '0');
		in++;
	}

	if(str[0] == '-')
	{
		
		i *= -1;
	}

	return(i);
}


// int main () {
//    int val;
//    char str[20];
   
//    strcpy(str, "-98993489");
//    val = ft_atoi(str);
//    printf("String value = %s, Int value = %d\n", str, val);

//    return(0);
// }