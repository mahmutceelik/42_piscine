int	ft_recursive_power(int nb, int power)
{
	int	m;

	m = nb;
	if (m > m * nb)
		return (0);
	else if (power > 1)
		return (m * ft_recursive_power(m, power - 1));
	else if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
		return (m);
}
