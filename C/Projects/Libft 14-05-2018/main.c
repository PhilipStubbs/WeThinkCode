
#include "libft.h"

//ft_atoi

// int main () {
//    int val;
//    char str[20];
   
//    strcpy(str, "-98993489");
//    val = ft_atoi(str);
//    printf("String value = %s, Int value = %d\n", str, val);

//    return(0);
// }






//fb_bzero
// int main () 
// {
//    char str[50];

//    strcpy(str,"This is string.h library function");
//    puts(str);

//    ft_memset(str,'$' ,7);
//    puts(str); 
//    ft_bzero(str,7);
//    puts(str);
   
//    return(0);
// }





// ft_isalnum
// int main () {
//    int var1 = 'd';
//    int var2 = '2';
//    int var3 = '\t';
//    int var4 = ' ';
    
//    if( ft_isalnum(var1) ) {
//       printf("var1 = |%c| is alphanumeric\n", var1 );
//    } else {
//       printf("var1 = |%c| is not alphanumeric\n", var1 );
//    }
   
//    if( ft_isalnum(var2) ) {
//       printf("var2 = |%c| is alphanumeric\n", var2 );
//    } else {
//       printf("var2 = |%c| is not alphanumeric\n", var2 );
//    }
   
//    if( ft_isalnum(var3) ) {
//       printf("var3 = |%c| is alphanumeric\n", var3 );
//    } else {
//       printf("var3 = |%c| is not alphanumeric\n", var3 );
//    }
   
//    if( ft_isalnum(var4) ) {
//       printf("var4 = |%c| is alphanumeric\n", var4 );
//    } else {
//       printf("var4 = |%c| is not alphanumeric\n", var4 );
//    }
//    return(0);
// }






// ft_isalpha

// int main () {
// 	int var1 = 'd';
// 	int var2 = '2';
// 	int var3 = 'D';
// 	int var4 = ' ';
	 
// 	if( ft_isalpha(var1) ) {
// 		printf("var1 = |%c| is an alphabet\n", var1 );
// 	} else {
// 		printf("var1 = |%c| is not an alphabet\n", var1 );
// 	}
	
// 	if( ft_isalpha(var2) ) {
// 		printf("var2 = |%c| is an alphabet\n", var2 );
// 	} else {
// 		printf("var2 = |%c| is not an alphabet\n", var2 );
// 	}
	
// 	if( ft_isalpha(var3) ) {
// 		printf("var3 = |%c| is an alphabet\n", var3 );
// 	} else {
// 		printf("var3 = |%c| is not an alphabet\n", var3 );
// 	}
	
// 	if( ft_isalpha(var4) ) {
// 		printf("var4 = |%c| is an alphabet\n", var4 );
// 	} else {
// 		printf("var4 = |%c| is not an alphabet\n", var4 );
// 	}
	
// 	return(0);
// }





// ft_isascii
 
// int main(void)
// {
//    int ch;
 
//    for (ch = 0x7c; ch <= 0x82; ch++) {
//       printf("%#04x    ", ch);
//       if (ft_isascii(ch))
//          printf("The character is %c\n", ch);
//       else
//          printf("Cannot be represented by an ASCII character\n");
//    }
//    return 0;
// }







// ft_isdigit
// int main () {
//    int var1 = 'h';
//    int var2 = '9';
    
//    if( ft_isdigit(var1) ) {
//       printf("var1 = |%c| is a digit\n", var1 );
//    } else {
//       printf("var1 = |%c| is not a digit\n", var1 );
//    }
   
//    if( ft_isdigit(var2) ) {
//       printf("var2 = |%c| is a digit\n", var2 );
//    } else {
//       printf("var2 = |%c| is not a digit\n", var2 );
//    }
   
//    return(0);
// }





// ft_isprint
// int main () {
//    int var1 = 'k';
//    int var2 = '8';
//    int var3 = '\t';
//    int var4 = ' ';
    
//    if( ft_isprint(var1) ) {
//       printf("var1 = |%c| can be printed\n", var1 );
//    } else {
//       printf("var1 = |%c| can't be printed\n", var1 );
//    }
   
//    if( ft_isprint(var2) ) {
//       printf("var2 = |%c| can be printed\n", var2 );
//    } else {
//       printf("var2 = |%c| can't be printed\n", var2 );
//    }
   
//    if( ft_isprint(var3) ) {
//       printf("var3 = |%c| can be printed\n", var3 );
//    } else {
//       printf("var3 = |%c| can't be printed\n", var3 );
//    }
   
//    if( ft_isprint(var4) ) {
//       printf("var4 = |%c| can be printed\n", var4 );
//    } else {
//       printf("var4 = |%c| can't be printed\n", var4 );
//    }
   
//    return(0);
// }   





// ft_memalloc
// int main()
// {	
// 	char *p = ft_memalloc(0);
// 	char *a = (char*)malloc(-1);
// 	printf("%s\n", ft_memset(p, 'a',100000));
// 	printf("%s", memset(a, 'a',100000));

// 	return(1);
// }



// ft_memccpy

// int main() {
// 	char *msg = "This is the string: not copied";

//     char buffer[80];
//     memset( buffer, '\0', 80 );
//     printf("%p\n",memccpy( buffer, msg, ':', 80 ));
//     printf( "%s\n", buffer );

//     return(0);
//   }




// ft_memchr

// int main () {
//    const char str[] = "This is a test";
//    const char ch = 's';
//    char *ret;

//    ret = memchr(str, ch, strlen(str));

//    printf("String after |%c| is - |%s|\n", ch, ret);

//    return(0);
// }



// ft_memmove

// int main () {
//    char dest[] = "oldstring";
//    const char src[]  = "newstring";

//    printf("Before memmove dest = %s, src = %s\n", dest, src);
//    ft_memmove(dest, src, 9);
//    printf("After memmove dest = %s, src = %s\n", dest, src);

//    return(0);
// }





// ft_memset
// int main () 
// {
//    char str[50];


//    strcpy(str,"This is string.h library function");
//    puts(str);

//    memset(str,'$',7);
//    puts(str);
   
//    return(0);
// }

// ft_memcmp.c
// int main()
// {
// 	char str[] = "h";
// 	char str2[] = "h";

// 	printf("%d\n", ft_memcmp(str, str2, 5));
// 	printf("%d\n", memcmp(str, str2, 5));
// 	return(1);
// }



// ft_memcpy
// int main () {
//    const char src[50] = "This is a test!";
//    char dest[50];


//    ft_memcpy(dest, src, strlen(src)+1);

//    printf("After memcpy dest = %s\n", dest);
   
//    return(0);
// }




// ft_strcat

// int main () {
//    char src[50], dest[10];

//    ft_strcpy(src,  "This is source");
//    ft_strcpy(dest, "This is destination");

//    ft_strcat(dest, src);

//    printf("Final destination string : |%s|", dest);
   
//    return(0);
// }



// ft_strchr
// int main () {
//    const char str[] = "This is a test";
//    const char ch = 'e';
//    char *ret;

//    ret = ft_strchr(str, ch);

//    printf("String after |%c| is - |%s|\n", ch, ret);
   
//    return(0);
// }


// 	void strcmp_main()
// {
// 	printf("\e[01;33mFT_STRCMP\n");
// 	usleep(100000);
// 	((ft_strcmp("abc", "abc")== 0)&&
// 	(ft_strcmp("abc", "abd") < 0) &&
// 	(ft_strcmp("a", "abcde")!= 0)) ? printf("\x1b[1;32m Passed all the above tests\n"):
// 	printf("\x1b[1;31mFiled one or more of the above tests\n");
// 	usleep(100000);
// }

// // ft_strcmp
// int main()
// {

// 	char str[] = "E";
// 	char str2[] = "EERSDF";
// 	strcmp_main();
// 	printf("%d\n", ft_strcmp(str, str2));
// 	printf("%d", strcmp(str, str2));
// 	return(1);
// }




// ft_strcpy

// int main () {
//    char src[40];
//    char dest[100];
  
//    ft_memset(dest, '\0', sizeof(dest));
//    ft_strcpy(src, "This is a test");
//    ft_strcpy(dest, src);

//    printf("Final copied string : %s\n", dest);
   
//    return(0);
// }


// ft_striter

// void test(char *c)
// {	

// 	if(ft_isalpha(c))
// 	{
// 		c = c +1;
// 	}
// }

// void test(char *c)
// {
//     printf( "%c\n", *c );
// }


// int	main()
// {


// 	char *p = "abcd";
// 	void (*foo)(char*) = &test;


// 	// foo = &test;
// 	ft_striter(p, foo);
// 	ft_putstr(p);
// 	return(1);
// }


// ft_strlcat

// int main () {
//    char src[50], dest[50];

//    strcpy(src,  "This is source");
//    strcpy(dest, "This is destination");

//    strlcat(dest, src, 50);

//    printf("Final destination string : |%s|", dest);
   
//    return(0);
// }



// ft_strlen 
// int main () {
//    char str[50];
//    int len;

//    strcpy(str, "This is a test");

//    len = ft_strlen(str);
//    printf("Length of |%s| is |%d|\n", str, len);
   
//    return(0);
// }






// ft_strncat

// int main () {
//    char src[50], dest[50];

//    strcpy(src,  "This is source");
//    strcpy(dest, "This is destination");

//    strncat(dest, src, 0);

//    printf("Final destination string : |%s|", dest);
   
//    return(0);
// }





// ft_strncmp
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
// 





// ft_strncpy
// int main () {
//    char src[40];
//    char dest[12];
  
//    memset(dest, '\0', sizeof(dest));
//    strcpy(src, "This is tutorialspoint.com");
//    ft_strncpy(dest, src, 10);

//    printf("Final copied string : %s\n", dest);
   
//    return(0);
// }





// ft_strnstr

// int main () {
//    const char haystack[20] = "This is a test";
//    const char needle[10] = "is";
//    char *ret;

//    ret = ft_strnstr(haystack, needle, 4);

//    printf("The substring is: %s\n", ret);
   
//    return(0);
// }





// ft_strrchr

// int main () {
//    const char str[] = "This is a test";
//    const char ch = ' ';
//    char *ret;

//    ret = ft_strrchr(str, ch);

//    printf("String after |%c| is - |%s|\n", ch, ret);
   
//    return(0);
// }



// ft_strstr
// int main () {
//    const char haystack[20] = "This is a test";
//    const char needle[10] = "esf";
//    char *ret;

//    ret = strstr(haystack, needle);

//    printf("The substring is: %s\n", ret);
   
//    return(0);
// }




// ft_tolower
// int main () {
//    int i = 0;
//    char str[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ\n";
   
//    while(str[i]) {
//       putchar (ft_tolower(str[i]));
//       i++;
//    }
   
//    return(0);
// }



// ft_toupper

// int main () {
//    int i = 0;
//    char str[] = "abcdefghijklmnopqrstuvwxyz\n";
   
//    while(str[i]) {
//       putchar (ft_toupper(str[i]));
//       i++;
//    }
   
//    return(0);
// }





// ft_striteri
// void test(unsigned int i, char *c)
// {
//     printf( "%c\n", c[i] );
// }


// int	main()
// {


// 	char *p = "abcd";
// 	void (*foo)(unsigned int, char *) = &test;


// 	// foo = &test;
// 	ft_striteri(p, foo);
// 	ft_putstr(p);
// 	return(1);
// }




// ft_strmap

// char test1(char c)
// {
//     char a = c;

//     a = c + 1;
//     // printf("%c\n", a);
//     return(a);
// }


// int	main()
// {


// 	const char *p = "abcd";
// 	char *e;
// 	char (*foo)(char) = &test1;


// 	// foo = &test;
// 	e = ft_strmap(p, foo);

// 	ft_putstr(p);
// 	ft_putchar('\n');
// 	ft_putstr(e);
// 	return(1);
// }









// ft_strmapi

// char test1(unsigned int i, char c)
// {
//     char a = c;

//     a = c + 1;
//     i = 4;
//     // printf("%c\n", a);
//     return(a);
// }


// int	main()
// {


// 	const char *p = "abcd";
// 	char *e;
// 	char (*foo)(unsigned int, char) = &test1;


// 	// foo = &test;
// 	e = ft_strmapi(p, foo);

// 	ft_putstr(p);
// 	ft_putchar('\n');
// 	ft_putstr(e);
// 	return(1);
// }




// ft_strequ
// int	main()
// {


// 	const char *p = "bced";
// 	const char *a = "abcd";

// 	printf("%d", ft_strequ(p, a));

// 	return(1);
// }




// ft_strnequ
// int	main()
// {
// 	const char *p = "aAcde";
// 	const char *a = "abcdd";

// 	printf("%d", ft_strnequ(p, a, 1));

// 	return(1);
// }










// ft_strsub

// int	main()
// {
// 	const char *p = "aAcde";

// 	printf("%s", ft_strsub(p, 2, 4));

// 	return(1);
// }





// ft_strjoin
// int	main()
// {
// 	char *p = "Hello";
// 	char *a = "friend";

// 	printf("%s", ft_strjoin(p,a ));

// 	return(1);
// }






// ft_strtrim
// int	main()
// {
// 	char *p = "		  \n  Hello friend its me 	 ";

// 	printf("%s", ft_strtrim(p));

// 	return(1);
// }



// ft_atoi
// int	main()
// {
// 	char *e = ft_itoa(2147483647);

// 	printf("main %s\n" , e);
// 	return(1);
// }







//strsplit
// int	main()
// {

// 	const char *p = " Hello     my.   friends       ";
// 	char **a;
	
// 	a = ft_strsplit(p, ' ');
// 	int i;
// 	i = 0;
// 	printf("%c\n",a[i][4]);
// 	while ( i <= 2)
// 	{
// 		printf("%s\n", a[i++]);
// 	}
// 	return(1);
// }










// void atoi_main()
// {
// 	printf("\e[01;33mFT_ATOI\n");
// 	usleep(100000);
// 	((ft_atoi(" -sfecf") == 0) &&
// 	(ft_atoi("+2798") == 2798) &&
// 	(ft_atoi("  \t\n  \r\r\v\f-899") == -899) &&
// 	(ft_atoi("+0089") == 89) &&
// 	(ft_atoi("-2147483648") == -2147483648) &&
// 	(ft_atoi("a56") == 0) &&
// 	(ft_atoi("    555 5555555555555555") == 555)) ? printf("\x1b[1;32m Passed all the above tests\n"):
// 	printf("\x1b[1;31mFiled one or more of the above tests\n");
// 	usleep(100000);
// }
// int	main()
// {
// 	printf("%d == 0\n", ft_atoi(" -sfecf"));
// 	printf("%d == 2798\n", ft_atoi("+2798"));
// 	printf("%d == -899\n", ft_atoi("  \t\n  \r\r\v\f-899"));
// 	printf("%d == 89\n", ft_atoi("+0089"));
// 	printf("%d == -2147483648 \n", ft_atoi("-2147483648"));
// 	printf("%d == 0\n", ft_atoi("a56"));
// 	printf("%d == 555 \n", ft_atoi("    555 5555555555555555"));
// 	return(1);
// }















