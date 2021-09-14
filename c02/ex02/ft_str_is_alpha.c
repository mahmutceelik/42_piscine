int	ft_str_is_alpha(char *str)
{
	int	i;
	int	c;

	c = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] <= 122 && str[i] >= 97) && !(str[i] >= 65 && str[i] <= 90))
			c = 0;
		i++;
	}
	return (c);
}
