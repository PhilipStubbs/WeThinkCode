#include <stdio.h>
#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

int		vaildbrack(char *str)
{
	int	squ;
	int	brak;
	int	brac;

	squ = 0;
	brak = 0;
	brac = 0;
	while (*str)
	{
		if (*str == '[')
			squ++;
		if (*str == '(')
			brak++;
		if (*str == '{')
			brac++;
		if (*str == ']')
			squ--;
		if (*str == ')')
			brak--;
		if (*str == '}')
			brac--;
		str++;
	}
	return (squ + brak + brac);
}

int		isempt(char *str)
{
	int	squ;
	int	brak;
	int	brac;

	squ = 0;
	brak = 0;
	brac = 0;
	while (*str)
	{
		if (*str == '[')
			squ++;
		if (*str == '(')
			brak++;
		if (*str == '{')
			brac++;
		str++;
	}
	if (squ + brak + brac == 0)
		return (1);
	return (0);
}

int		checkbrackets(char *str, int i)
{
	char c;

	c = str[i];
	i++;
	if (c == '(')
	{
		while (str[i])
		{
			if (str[i] == ')')
				return (i + 1);
			if (str[i] == ']' || str[i] == '}')
				return (-1);
			if (str[i] == '(' || str[i] == '[' || str[i] == '{')
				i = checkbrackets(str , i);
			else
				i++;
		}
	}
	if (c == '[')
	{
		while (str[i])
		{
			if (str[i] == ']')
				return (i + 1);
			if (str[i] == ')' || str[i] == '}')
				return (-1);
			if (str[i] == '[' || str[i] == '(' || str[i] == '{')
				i = checkbrackets(str, i);
			else
				i++;
		}
	}
	if (c == '{')
	{
		while (str[i])
		{
			if(str[i] == '}')
				return (i + 1);
			if (str[i] == ')' || str[i] == ']')
				return (-1);
			if (str[i] == '(' || str[i] == '[' || str[i] == '{')
				i = checkbrackets(str, i);
			else
				i++;
		}
	}
	return (-1);
}

int		isvalid(char *str)
{
	int		i;
	int		x;
	char	tmp;

	i = 0;

	while (str[i])
	{
		if (str[i] == '(' || str[i] == '[' || str[i] == '{')
		{
			x = checkbrackets(str, i);
			if (x < 0)
				return (0);
		}
		i++;
	}
	return (1);
}


void	brackets(char *str)
{	
	if (vaildbrack(str) != 0)
	{
		ft_putstr("Error");
		return ;
	}
	if (isempt(str) > 0)
	{
		ft_putstr("OK");
		return ;
	}
	if (isvalid(str) == 1)
	{
		ft_putstr("OK");
		return ;
	}
	ft_putstr("Error");
}


int main(int arc, char **arv)
{	
	int i;

	i = 1;

	if (arc > 1)
		while(arv[i])
			brackets(arv[i++]);
	write(1, "\n", 2);
	return (1);
}