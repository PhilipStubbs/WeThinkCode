
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

// int	ft_atoi(char *str)
// {	
// 	int i;
// 	i = 0;
// 	while (*str >= '0' && *str <= '9')
// 	{
// 		i = i *10 + (*str - '0');
// 		str++;
// 	}
// 	printf("output i = %d\n",i);
// 	return(i);
// }

// int ft_atoi(char *c)
// {
//     int result;

//     while (*c >= '0' && *c <= '9')
//     {
//     	result = (result * 10) + (*c++ - 48);
//     }
//     return(result);
// }





int main(int arc, char **arv)
{	
	// int result;
	int atoiresult;

	if (arc == 4)
	{
		// printf("arc == %d\n", arc);
		// printf("arv[0] == %s\n", arv[0]);
		// printf("arv[1] == %s\n", arv[1]);
		// printf("arv[2] == %s\n", arv[2]);
		// printf("arv[3] == %s\n", arv[3]);
		// printf("atoi(arv[1]) == %i\n", atoi(arv[1]));
		// printf("atoi(arv[3] == %i\n", atoi(arv[3]));	

		if (arv[2][0] == '+')
		{
			// result = ((ft_atoi(arv[1])) + (ft_atoi(arv[3])));
			atoiresult = ((atoi(arv[1])) + (atoi(arv[3])));
		}

		if (arv[2][0] == '-')
		{
			 // result = ((ft_atoi(arv[1])) - (ft_atoi(arv[3])));
			 atoiresult = ((atoi(arv[1])) - (atoi(arv[3])));
		}

		if (arv[2][0] == '*')
		{
			 // result = ((ft_atoi(arv[1])) * (ft_atoi(arv[3])));
			 atoiresult = ((atoi(arv[1])) * (atoi(arv[3])));
		}

		if (arv[2][0] == '/')
		{
			// result = ((ft_atoi(arv[1])) / (ft_atoi(arv[3])));
			atoiresult = ((atoi(arv[1])) / (atoi(arv[3])));
		}

		if (arv[2][0] == '%')
		{
			 // result = ((ft_atoi(arv[1])) % (ft_atoi(arv[3])));
			 atoiresult = ((atoi(arv[1])) % (atoi(arv[3])));
		}

		printf("=========== \n");
		// printf("my result == %d\n", result);
		printf("atoi result == %d", atoiresult);
	}
	else
	{
		write(1,"\n", 1);
	}
}
