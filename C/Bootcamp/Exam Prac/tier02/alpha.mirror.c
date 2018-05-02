#include <unistd.h>
#include <stdio.h>

int main(int arc, char **arv)
{
	char alar[26];
	char realar[26];
	char a = 'a';
	int i = 0;
	int b = 0;

	while(a <= 'z')
	{
		alar[i++] = a++;
	}
	alar[i+1] = '\0';
	i = 0;

	a = 'z';
	while(a >= 'a')
	{
		realar[i++] = a--;
	}
	realar[i+1] = '\0';
	
	// printf("%s\n", alar);
	// printf("%s\n",realar );

	if (arc ==2)
	{
		i = 0;
		while(arv[1][i] != '\0')
		{	
			b = 0;
			while(alar[b] != '\0')
			{
				if (arv[1][i] == alar[b])
				{
					arv[1][i] = realar[b];
					break;
				}
				else if (arv[1][i] == (alar[b] - 32))
				{
					arv[1][i] = (realar[b] - 32);
					break;
				}
				b++;
			}
			i++;
		}



	i = 0;
	while (arv[1][i] != '\0')
	{
		a = arv[1][i];
		write(1, &a, 1);
		i++;
	}

	}
	else
	{
		write(1, "\n",1);
	}

}