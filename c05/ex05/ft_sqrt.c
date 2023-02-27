int	ft_sqrt(int nb)
{
	int	t;

	t = 1;
	if (nb > 0)
	{
		while (t * t <= nb)
		{
			if (t * t == nb)
				return (t);
			else if (t >= 46341)
				return (0);
			t++;
		}
	}
	return (0);
}
