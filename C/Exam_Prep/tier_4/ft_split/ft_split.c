#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int		ft_words(char *str)
{
	int count;
	int i;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] &&(str[i] == ' ' || str[i] == '	' || str[i] == '\n'))
			i++;
		while ( str[i] && str[i] != ' ' && str[i] != '	' && str[i] != '\n')
			i++;
		count++;	
	}
	return(count);
}

void	ft_strpull(int w,char **ret, char *str)
{
	int		i;
	int 	len;

	len = 0;
	i = 0;
	while (str[len] && str[len] != ' ' && str[len] != '	' && str[len] != '\n')
		len++;

	ret[w] = (char*)malloc(len + 1);
	while (i <= len)
	{
		ret[w][i] = *str;
		i++;
		str++;
	}
	ret[w][i] = '\0';
}

char	**ft_split(char *str)
{
	int		words;
	char	**ret;
	int 	i;

	words = ft_words(str);
	ret = (char**)malloc(sizeof(*ret) * words + 1);
	i = 0;
	while (i <= words)
	{
		while ((*str == ' ' || *str == '	' || *str == '\n') && *str != '\0')
			str++;
		ft_strpull(i, ret, str);
		while (*str != ' ' && *str != '	' && *str != '\n' && *str != '\0')
			str++;
		i++;
	}
	ret[words] = NULL;
	return (ret);
}
