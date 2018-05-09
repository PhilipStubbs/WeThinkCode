#include <stdio.h>
#include <string.h>

char *ft_strstr(const char *haystack, const char *needle)
{
	char *p1;
	char *p2;
	int i;
	
	p2 = (char*)needle;
	p1 = (char*)haystack;
	i = 0;
	while(1)
	{
		if(p2[i] == p1[i])
		{
			if(p2[i+1] == '\0')
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
//    const char needle[10] = "esf";
//    char *ret;

//    ret = strstr(haystack, needle);

//    printf("The substring is: %s\n", ret);
   
//    return(0);
// }