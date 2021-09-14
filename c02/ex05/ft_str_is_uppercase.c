int	ft_str_is_uppercase(char *str)
{
	char	*charptr;

	charptr = str;
	while (*charptr != 0)
	{
		if (*charptr < 'A' || *charptr > 'Z')
		{
			return (0);
		}
		charptr++;
	}
	return (1);
}
