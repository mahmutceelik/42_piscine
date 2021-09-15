#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putchar_base(int nb, char *b)
{
	int	c;

	c = b[nb];
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] == '-' || str[i] == '+' || str[i] == ' ')
			return (0);
		j = 1;
		while (str[i + j] != 0)
		{
			if (str[i] == str[i + j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (s1[i] != s2[i])
		return (s1[i] - s2[i]);
	else
		return (0);
}

void	ft_putnbr_base(int nb, char *base)
{
	int	b;

	b = ft_strlen(base);
	if (b < 2)
		return ;
	if (nb == -2147483648)
	{
		ft_putnbr_base(nb / b, base);
		ft_putnbr_base(-(nb % b), base);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr_base(-nb, base);
	}
	else if (nb < b)
		ft_putchar_base(nb, base);
	else
	{
		ft_putnbr_base(nb / b, base);
		ft_putchar_base((nb % b), base);
	}
}
