#include <stdio.h>
#include <string.h>

char *ft_strchr(const char *str, int c);

//Need to finish this

char *ft_strstr(const char *haystack, const char *needle, size_t slen)
{
	char *p1;
	char *p2;
	int i;
	
	p2 = (char*)needle;
	p1 = ft_strchr(haystack, *p2);
	if (p1 == NULL)
		return (p1);
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
			p1++;
		}
	}
}


int main () {
   const char haystack[20] = "This is a test";
   const char needle[10] = "is";
   char *ret;

   ret = ft_strstr(haystack, needle);

   printf("The substring is: %s\n", ret);
   
   return(0);
}