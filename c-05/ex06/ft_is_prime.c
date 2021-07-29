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
