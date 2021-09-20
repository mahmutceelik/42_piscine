#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	int	t;

	t = 1;
	while (t < argc)
		ft_putstr(argv[t++]);
}
