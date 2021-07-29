#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	strx2(char *str, char to_find)
{
	int	x2;

	x2 = -1;
	while (*str)
	{
		if (*str++ == to_find)
			x2++;
	}
	return (x2);
}

void	check_base(char nb, char *base)
{
	while (*base)
	{
		if (nb == *base)
			ft_putchar(nb);
		base++;
	}
}

void	nbr_base(int nb, char *base)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb < 10)
	{
		check_base(nb + '0', base);
		return ;
	}
	else
		nbr_base(nb / 10, base);
	nbr_base(nb % 10, base);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;

	i = 0;
	if (!*base || !base[1])
		return ;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return ;
		if (strx2(base, base[i]))
			return ;
		i++;
	}
	nbr_base(nbr, base);
}
