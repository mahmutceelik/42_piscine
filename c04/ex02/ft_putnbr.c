#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		ft_putnbr(nb / 10);
		ft_putchar('8');
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else if (nb < 10)
	{
		c = '0' + nb;
		ft_putchar(c);
	}
	else
	{
		ft_putnbr(nb / 10);
		c = '0' + (nb % 10);
		ft_putchar(c);
	}
}
