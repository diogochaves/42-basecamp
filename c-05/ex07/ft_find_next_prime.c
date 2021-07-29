int	ft_is_prime(int nb)
{
	int	odd;

	if (nb <= 2 || !(nb % 2))
		return (nb == 2);
	odd = 3;
	while (odd <= nb / odd)
	{
		if (nb % odd == 0)
			return (0);
		odd += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	if (!(nb % 2))
		nb++;
	while (!ft_is_prime(nb))
	{
		nb += 2;
	}
	return (nb);
}
