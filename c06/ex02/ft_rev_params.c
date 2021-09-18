#include <unistd.h>

int	main(int argc, char **argv)
{
	int	m;
	int	k;

	m = argc - 1;
	while (m >= 1)
	{
		k = 0;
		while (argv[m][k] != '\0')
		{
			write(1, &argv[m][k], 1);
			k++;
		}
		m--;
		write(1, "\n", 1);
	}
}
