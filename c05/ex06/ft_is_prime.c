int	ft_is_prime(int nb)
{
	int	a;

	if (nb == 2 || nb == 3 || nb == 5)
		return (1);
	else if (nb < 2)
		return (0);
	a = 2;
	while (a <= nb / 2 )
	{
		if (nb % a == 0)
			return (0);
		a++;
	}
	return (1);
}
