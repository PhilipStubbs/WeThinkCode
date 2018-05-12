#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n )
{
	unsigned int i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

// int main () {
//    char str1[15];
//    char str2[15];
//    int ret;

//    strcpy(str1, "abcdef");
//    strcpy(str2, "ABCDEF");

//    ret = ft_strncmp(str1, str2, 4);

//    if(ret < 0) {
//       printf("str1 is less than str2");
//    } else if(ret > 0) {
//       printf("str2 is less than str1");
//    } else {
//       printf("str1 is equal to str2");
//    }
   
//    return(0);
// }