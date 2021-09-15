int	ft_isspace(char c)
{
	return (c == '\v' || c == '\f' || c == '\n'
		|| c == '\t' || c == ' ' || c == '\r');
}

int	ft_atoi(char *str)
{
	int	i;
	int	number;
	int	sign;

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
	while ((str[i] <= '9' && str[i] >= '0') && str[i] != 0)
	{
		number = number * 10 + str[i] - '0';
		i++;
	}
	number *= sign;
	return (number);
}
