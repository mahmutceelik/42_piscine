void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	c;
	int	index;

	index = 0;
	c = -2147483648;
	i = 0;
	while (i < size)
	{
		if (tab[i] >= c)
		{
			c = tab[i];
			index = i;
		}
		i++;
	}
	tab[index] = tab[size - 1];
	tab[size - 1] = c;
	if (size > 1)
		ft_sort_int_tab(tab, size - 1);
}
