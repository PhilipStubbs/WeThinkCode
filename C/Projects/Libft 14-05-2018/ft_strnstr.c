#include <stdio.h>
#include <string.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char *p1;
	int i;
	size_t count;
	
	p1 = (char*)haystack;
	i = 0;
	count = 0;
	while(1)
	{	
		if(count++ >= len)
			return(p1 = NULL);
		if(needle[i] == p1[i])
		{
			if(needle[i+1] == '\0')
				return(p1);
			i++;
		}
		else
		{	
			i = 0;
			if(p1[i] == '\0')
				return(p1 = NULL);
			p1++;
		}
	}
}


// int main () {
//    const char haystack[20] = "This is a test";
//    const char needle[10] = "is";
//    char *ret;

//    ret = ft_strnstr(haystack, needle, 4);

//    printf("The substring is: %s\n", ret);
   
//    return(0);
// }