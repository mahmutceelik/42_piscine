#include <stdio.h>

int	ft_isspace(char c)
{
	return (c == '\v' || c == '\f' || c == '\n'
		|| c == '\t' || c == ' ' || c == '\r');
}

int	ft_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != 0)
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_strlen(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] == '-' || str[i] == '+' || str[i] == ' ')
			return (0);
		j = 1;
		while (str[i + j] != 0)
		{
			if (str[i] == str[i + j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (s1[i] != s2[i])
		return (s1[i] - s2[i]);
	else
		return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	number;
	int	sign;
	int	b;

	b = ft_strlen(base);
	if (b < 2)
		return (0);
	sign = 1;
	i = 0;
	number = 0;
	while (ft_isspace(str[i]) && str[i] != 0)
		i++;
	while ((str[i] == '-' || str[i] == '+') && str[i] != 0)
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (ft_in_base(str[i], base) != -1 && str[i] != 0)
	{
		number = number * b + ft_in_base(str[i], base);
		i++;
	}
	return (sign * number);
}

int	main()
{
	printf("%d", ft_atoi_base("  --+10233","01"));
}
