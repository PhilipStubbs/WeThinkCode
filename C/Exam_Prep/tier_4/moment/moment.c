
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		ft_strlen(char *str)
{
	int	size;

	size = 0;
	while(str[size])
		size++;
	return (size);
}

char	*ft_itoa(unsigned int n)
{
	char				*ret;
	unsigned int		temp;
	unsigned int		size;

	size = 1;
	temp = n;
	while(temp /= 10)
		size++;
	ret = (char*)malloc(sizeof(char)*size);
	ret[size] = '\0';

	while(n)
	{
		ret[--size] = n % 10 + '0';
		n /= 10;
	}
	return (ret);
}

char	*ft_strcat(char *dest, char *sou)
{
	char	*ret;
	int		destlen;
	int		soulen;
	int		len;
	int		i;
	int		id;

	destlen = ft_strlen(dest);
	soulen = ft_strlen(sou);
	len = destlen + soulen + 1;
	ret = (char *)malloc(sizeof(char) * len);
	i = 0;
	while (i <= len)
		ret[i++] = '\0';
	i = 0;
	while (dest[i])
	{
		ret[i] = dest[i];
		i++;
	}
	id = 0;
	while (sou[id])
	{
		ret[i] = sou[id];
		i++;
		id++;
	}
	ret[i] = '\0';
	return (ret);
}

char	*moment(unsigned int dur)
{
	char *ret;

	if (dur == 0)
	{
		return ("0 seconds ago.");
	}
	if (dur == 1)
	{
		return ("1 second ago.");
	}
	if (dur < 60)
	{
		ret = ft_strcat(ft_itoa(dur), " seconds ago.");
		return (ret);
	}
	if (dur >= 60 && dur < 120)
	{
		return ("1 minute ago.");
	}
	if (dur < 3600)
	{
		ret = ft_strcat(ft_itoa(dur / 60), " minutes ago.");
		return (ret);
	}
	if (dur >= 3600 && dur < 7200)
	{
		return ("1 hour ago.");
	}
	if (dur < 86400)
	{
		ret = ft_strcat(ft_itoa(dur / 3600), " hours ago.");
		return (ret);
	}
	if (dur >= 86400 && dur < 172800)
	{
		return ("1 day ago.");
	}
	if (dur < 604800)
	{
		ret = ft_strcat(ft_itoa(dur / 86400), " days ago.");
		return (ret);
	}
	if (dur >= 604800 && dur < 1209600)
	{
		return ("1 week ago.");
	}
	if (dur < 2419200)
	{
		ret = ft_strcat(ft_itoa(dur / 604800), " weeks ago.");
		return (ret);
	}
	if (dur >= 2419200 && dur < 4838400)
	{
		return ("1 month ago.");
	}
	if (dur < 29030400)
	{
		ret = ft_strcat(ft_itoa(dur / 2419200), " months ago.");
		return (ret);
	}
	if (dur >= 34840800)
	{
		return ("12 months ago.");
	}
	// write(1, "X\n", 2);
	return (NULL);

}

int	main(int arc, char **arv)
{
	if (arc == 2)
		printf("%s\n", moment(atoi(arv[1])));
	return(1);
}