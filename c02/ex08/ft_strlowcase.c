char	*ft_strlowcase(char *str)
{
	char	*charptr;

	charptr = str;
	while (*charptr != 0)
	{
		if (*charptr >= 'A' && *charptr <= 'Z')
		{
			*charptr += 32;
		}
		charptr++;
	}
	return (str);
}
