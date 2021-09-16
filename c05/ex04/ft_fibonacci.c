int	ft_fibonacci(int index)
{
	int	k;

	if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else if (index > 1)
	{
		k = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (k);
	}
	else
		return (-1);
}
