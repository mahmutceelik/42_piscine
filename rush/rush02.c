void	ft_putchar(char c);

void	ft_row(int x, int lim, char sym, char sep)
{
	int		i;
	int		j;

	i = 0;
	j = 1;
	while (i < lim)
	{
		ft_putchar(sym);
		while (++j < x)
			ft_putchar(sep);
		if (x > 1)
			ft_putchar(sym);
		ft_putchar('\n');
		j = 1;
		i++;
	}
}

void	rush(int x, int y)
{
	if (x >= 0 && y > 0)
	{
		if (x == 0)
			ft_row(x, 1, '\0', '\0');
		else
			ft_row(x, 1, 'A', 'B');
        if (y > 2)
			ft_row(x, y - 2, 'B', ' ');
        if (y > 1)
			ft_row(x, 1, 'C', 'B');
	}
}
