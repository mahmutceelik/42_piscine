int	ft_str_is_lowercase(char *str)
{
	char	*charptr;

	charptr = str;
	while (*charptr != 0)
	{
		if (*charptr < 'a' || *charptr > 'z')
		{
			return (0);
		}
		charptr++;
	}
	return (1);
}
