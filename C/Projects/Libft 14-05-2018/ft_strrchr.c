#include <stdio.h>
#include <string.h>


char *ft_strrchr(const char *str, int c)
{
	char *p1;
	int count;
	int count1;
	int i;

	p1 = (char*)str;
	i = 0;
	count = 0;
	count1 = 0;
	while(p1[i] != '\0')
	{
		if (p1[i] == c)
			count++;
		i++;
	}
	if(count == 0)
		return(p1 = NULL);
	while(count1 != count)
	{
		if (*p1 == c)
			count1++;
		p1++;
	}
	return(p1-1);
}


// int main () {
//    const char str[] = "This is a test";
//    const char ch = 'e';
//    char *ret;

//    ret = ft_strrchr(str, ch);

//    printf("String after |%c| is - |%s|\n", ch, ret);
   
//    return(0);
// }