#include <unistd.h>

int	main(int argc, char **argv)
{
	int	m;

	(void)argc;
	m = 0;
	while (argv[0][m] != '\0')
	{
		write(1, &argv[0][m], 1);
		m++;
	}
	write(1, "\n", 1);
}
