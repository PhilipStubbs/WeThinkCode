
#include <stdio.h>
#include <unistd.h>


int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ispal(char *str, int start, int len)
{
	int i;
	int l;
	int score;
	i = start+1;
	l = start-1;
	
	score = 0;
	while ((l >= 0 && i <= len) && str[i] != '\0')
	{
		if (str[i] == str[start] && str[l] != str[start] && start + 1 ==  i)
		{
			score += 2;
			i++;
		}
		if (str[i] == str[l])
		{
			score += 2;
		}
		else
			break ;
		l--;
		i++;
	}
	return (score);
}

void	pal(char *str)
{
	int i;
	int	score;
	int	tmpscore;
	int tmp;
	int len;
	int l;

	i = 0;
	score = 0;
	tmpscore = 0;
	tmp = 0;
	len = ft_strlen(str);
	while (str[i])
	{
		tmpscore = ispal(str, i, len);
		if (tmpscore > score)
		{
			score = tmpscore;
			tmp = i;
		}
		i++;
	}
	i = tmp+1;
	l = tmp-1;
	while (str[i] == str[l])
	{
		i++;
		l--;
	}
	l++;
	while (l <= i)
		write(1, &str[l++], 1);

	printf("%d",tmp );
}

int main(int arc, char **arv)
{
	if (arc == 2)
		pal(arv[1]);
	write(1, "\n", 1);
	return (1);
}

// $> biggest_pal "abcba"
// abcba
// $> biggest_pal "aaaaaaaaaabbcbbaaaa"
// aaaabbcbbaaaa
// $> biggest_pal "aooibdaoiwhoihwdoinzeldaisaboyobasiadlezfdsfnslk"
// zeldaisaboyobasiadlez
// $> biggest_pal "aeibaabaammaabaalek"
// aabaammaabaa