#include <unistd.h>

intt	g_uzunluk;
char	g_dizi[10];

void	rec(int once, int n)
{
	int	m;

	if (n == g_uzunluk)
	{
		write(1, g_diz, g_uzunluk);
		write(1, ", ", 2);
		return ;
	}
	if (once == 9)
		return ;
	m = once;
	while (++m <= 10 - g_uzunluk + n)
	{
		g_diz[n] = '0' + i;
		once(m, n + 1);
	}
}

void	print_last(int m)
{
	char	c;

	while (m <= 9)
	{
		c = '0' + m++;
		write(1, &c, 1);
	}
}

void	ft_print_combn(int n)
{
	int	m;

	m = 0;
	g_uzunluk = n;
	while (m < 10 - n)
	{
		g_dizi[0] = '0' + i;
		once(m++, 1);
	}
	print_last(m);
}
