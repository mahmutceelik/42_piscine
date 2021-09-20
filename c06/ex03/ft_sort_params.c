#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		else if (s2[i] > s1[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (s1[i] > s2[i])
		return (s1[i] - s2[i]);
	else if (s2[i] > s1[i])
		return (s1[i] - s2[i]);
	else
		return (0);
}

void	ft_sort_str_tab(char **tab, int size)
{
	char	i;
	char	*c;
	char	index;

	index = 1;
	c = tab[1];
	i = 1;
	while (i < size)
	{
		if (ft_strcmp(*(tab + i), c) >= 0)
		{
			c = *(tab + i);
			index = i;
		}
		i++;
	}
	*(tab + index) = *(tab + size - 1);
	tab[size - 1] = c;
	if (size > 2)
		ft_sort_str_tab(tab, size - 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		write(1, str + i++, 1);
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	int		i;
	char	**tab;

	tab = argv;
	i = 1;
	ft_sort_str_tab(tab, argc);
	while (i < argc)
		ft_putstr(tab[i++]);
}
