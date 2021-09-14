unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	counter;
	unsigned int	i;

	i = 0;
	counter = 0;
	while (src[i] != '\0')
	{
		if (i < size)
			dest[i] = src[i];
		counter++;
		i++;
	}
	if (i < (size - 1))
		dest[i] = '\0';
	else if (size > 0)
		dest[size - 1] = '\0';
	return (counter);
}
