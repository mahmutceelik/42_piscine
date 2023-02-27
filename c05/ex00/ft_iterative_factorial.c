int	ft_iterative_factorial(int nb)
{
	int	m;

	m = 1;
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	while (nb > 0)
		m *= nb--;
	return (m);
}
