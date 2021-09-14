int	ft_str_is_numeric(char *str)
{
	char	*charptr;

	charptr = str;
	while (*charptr != 0)
	{
		if (*charptr < '0' || *charptr > '9')
		{
			return (0);
		}
		charptr++;
	}
	return (1);
}
