#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	l;

	l = 0;
	while (str[l] != '\0')
		l++;
	return (l);
}

char	*ft_strdup(char *src)
{
	int		c;
	int		len;
	char	*copy;

	c = 0;
	len = ft_strlen(src);
	copy = (char *)malloc(sizeof(char) * len + 1);
	if (copy == NULL)
		return (NULL);
	while (src[c] != '\0')
	{
		copy[c] = src[c];
		c++;
	}
	copy[c] = '\0';
	return (copy);
}
