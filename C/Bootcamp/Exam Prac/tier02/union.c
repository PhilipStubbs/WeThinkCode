#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	char *p;

	p = str;

	while (*p != '\0')
	{
		ft_putchar(*p);
		p++;
	}
	ft_putchar('\n');
}



int main(int argc, char **argv)
{

	int i = 0;
	int b = 0;
	int s1len = 0;

	int pi =1;
	char *s1;
	char *s2;

	if(argc != 3)
		ft_putchar('\n');

	else
	{
		s1 = argv[1];
		s2 = argv[2];

	while(pi <=2)
	{		
		s1 = argv[pi];

		while(s1[s1len]) 	//finds lenth of string
		{
			s1len++;
		}

			i = s1len;
			b = s1len-1;
			while(i >= 0)
			{	
				b = i-1;
				while( b >= 0)
				{
					if(s1[i] == s1[b])
					{
						s1[i] = '^';
					}
					b--;
				}
				i--;
				
			}
			pi++;
	}	

	



			s1 = argv[1];
			ft_putstr(s1);
			ft_putchar('\n');
			ft_putstr(s2);



	}
























}





// int main(int argc, char **argv)
// {
// 	int i;
// 	int b;
// 	int counta;
// 	int countb;
// 	int final;
// 	int strlen1;
// 	int strlen2;

// 	strlen1 = 0;
// 	strlen2 = 0;
// 	counta = 0;
// 	countb = 0; 
// 	final = 0;
// 	i = 0;

// 	while (argv[1][i] != '\0')
// 	{
// 		strlen1++;
// 		i++;
// 	}

// 	i = 0;
// 	while (argv[2][i] != '\0')
// 	{
// 		strlen2++;
// 		i++;
// 	}
	
// 	i = 0;

// 	if (argc == 3)
// 	{
// 		i = (strlen1);

// 		while( i >= 0)
// 		{
// 			b = 1;
// 			while (argv[1][i - b] != argv[1][0])
// 			{
// 				if(argv[1][i] == argv[1][i - b])
// 					argv[1][i] = '-';
// 				b++;
// 			}
// 			i--;
// 		}

// 		i = (strlen2);

// 		while( i >= 0)
// 		{
// 			b = 1;
// 			while ((i - b) >= 0)
// 			{
// 				if(argv[2][i] == argv[2][i - b])
// 					argv[2][i] = '-';
// 				b++;
// 			}
// 			i--;
// 		}


// 		i = 0;
// 		b = 0;

// 		if (counta >= countb)
// 		{
// 			while(argv[2][i] != '\0')
// 			{	
// 				b = 0;
// 				while (argv[1][b] != '\0')
// 				{
// 					if (argv[2][i] == argv[1][b])
// 					{
// 						argv[2][i] = '-';
// 					}
// 					b++;
// 				}
// 				i++;
// 			}

// 		}


// 		i = 0;
// 		b = 0;
// 		while (argv[1][i] != '\0')
// 		{
// 			if(!(argv[1][i] == '-'))
// 			{
// 				ft_putchar(argv[1][i]);
// 			}
// 			i++;
// 		}
// 		while (argv[2][b] != '\0')
// 		{
// 			if(!(argv[2][b] == '-'))
// 			{
// 				ft_putchar(argv[2][b]);
// 			}
// 			b++;
// 		}

// 	}

// }