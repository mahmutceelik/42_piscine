#include <unistd.h>

int	main(int argc, char **argv)
{
	int	m;
	int	k;

	m = 1;
	while (argc > i)
	{
		k = 0;
		while (argv[m][k] != '\0')
		{
			write(1, &argv[m][k], 1);
			k++;
		}
		k++;
		write(1, "\n", 1);
	}
}
