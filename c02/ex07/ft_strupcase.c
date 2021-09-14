char	*ft_strupcase(char *str)
{
	char	*charptr;

	charptr = str;
	while (*charptr != 0)
	{
		if (*charptr >= 'a' && *charptr <= 'z')
		{
			*charptr -= 32;
		}
		charptr++;
	}
	return (str);
}
