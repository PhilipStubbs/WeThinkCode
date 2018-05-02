#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void ft_putarray(char **str, int count)
{
	int i = 0;
	int w =0;
	char *p;

	while( i != count)
	{
		p = str[i];
		ft_putstr(p);
	}
}

int main(int arc , char **arv)
{
	int count = 0;
	int start = 0;
	int end = 0;
	int i = 0;
	int ai =0;
	int wordi = 0;
	char *str;
	 char **test;
	char words[30][30];


	// words =(char*)malloc(1024);	
	if (arc == 2)
	{
		str = arv[1];
		while (str[i] != '\0')
		{
			while(str[i] == ' ')
			{
				start++;
				i++;
			}
			ai = start;
			end = start;
			while(str[i] != ' ' && str[i] != '\0')
			{
				end++;
				i++;
			}
			if(str[i - 1] != ' ' || str[i - 1] < 0)
			{
			count++;
			}

			wordi = 0;

			while(ai != end)
			{
				words[count - 1][wordi] = str[ai];
				ai++;
			}


			if (str[i] == '\0')
			{
				break;
			}
		}

		ft_putarray(words , count-1);
		printf("%d\n",count);
	}

	return(1);
}