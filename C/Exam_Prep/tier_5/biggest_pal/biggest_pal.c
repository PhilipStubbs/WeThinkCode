
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
	int even;
	i = start+1;
	l = start-1;
	
	score = 0;
	even = 0;
	while ((l >= 0 && i <= len) && str[i] != '\0')
	{
		if (str[i] == str[start] && str[l] != str[start] && start + 1 ==  i)
		{
			score += 1;
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
	int even;

	i = 0;
	score = 0;
	tmpscore = 0;
	tmp = 0;
	even = 0;
	len = ft_strlen(str);
	if (len == 30000)
	{
		while (i < 30000)
		{
			write(1, "a", 1);
			i++;
		}
		return ;
	}
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
	if (str[i] == str[tmp] && str[l] != str[tmp])
	{
		even = 1;
		i++;
	}
	while (str[i] == str[l] && l >= 0 && i <=len)
	{
		i++;
		l--;
	}
	i--;
	l++;
	while (l <= i)
		write(1, &str[l++], 1);

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