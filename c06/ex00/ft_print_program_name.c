#include <unistd.h>

int	main(int argc, char **argv)
{
	int	a;

	a = 0;
	if (argc > 0)
	{
		while (argv[0][a] != '\0')
		{
			write(1, &argv[0][a], 1);
			a++;
		}
		write(1, "\n", 1);
	}
}
