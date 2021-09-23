#include <stdlib.h>

int	ft_abs(int d)
{
	if (d < 0)
		return (-d);
	return (d);
}

int	*ft_range(int start, int end)
{
	int	s;
	int	*tab;

	s = 0;
	tab = (int *)malloc(sizeof(int) * ft_abs(start - end) + 1);
	while (start < end)
	{
		tab[s] = start;
		start++;
		s++;
	}
	tab[s] = start;
	while (start > end)
	{
		tab[s] = start;
		start--;
		s++;
	}
	tab[s] = start;
	return (tab);
}
