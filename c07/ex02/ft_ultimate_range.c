#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*ptr;
	int	b;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	ptr = (int *)malloc(sizeof(**range) * (max - min));
	if (!ptr)
		return (0);
	b = 0;
	while (min < max)
	{
		ptr[b++] = min;
		min++;
	}
	*range = ptr;
	return (b);
}
