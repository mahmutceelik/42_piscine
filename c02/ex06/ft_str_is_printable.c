int	ft_str_is_printable(char *str)
{
	char	*charptr;

	charptr = str;
	while (*charptr != 0)
	{
		if (*charptr <= 31 || *charptr == 127)
		{
			return (0);
		}
		charptr++;
	}
	return (1);
}
