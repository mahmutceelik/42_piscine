void	ft_putchar(char c);

void	ft_sym_arr(char *sym, char open_sym, char close_sym)
{
	sym[0] = open_sym;
	sym[1] = close_sym;
}

void	ft_row(int x, int lim, char *sym, char sep)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i < lim)
	{
		ft_putchar(sym[0]);
		while (++j < x)
			ft_putchar(sep);
		if (x > 1)
			ft_putchar(sym[1]);
		ft_putchar('\n');
		j = 1;
		i++;
	}
}

void	rush(int x, int y)
{
	char	sym[2];

	if (x >= 0 && y > 0)
	{
		if (x == 0)
		{		
			ft_sym_arr(sym, '\0', '\0');
			ft_row(x, 1, sym, '\0');
		}
		else
		{
			ft_sym_arr(sym, 'A', 'C');
			ft_row(x, 1, sym, 'B');
		}
		if (y > 2)
		{
			ft_sym_arr(sym, 'B', 'B');
			ft_row(x, y - 2, sym, ' ');
		}
		if (y > 1)
		{
			ft_sym_arr(sym, 'A', 'C');
			ft_row(x, 1, sym, 'B');
		}
	}
}
