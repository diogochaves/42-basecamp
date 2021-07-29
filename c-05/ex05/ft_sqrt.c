int	ft_sqrt(int nb)
{
	int	odd_num;
	int	times;

	odd_num = 1;
	times = 0;
	if (nb <= 0)
		return (0);
	while (nb)
	{
		nb -= odd_num;
		if (nb < 0)
			return (0);
		odd_num += 2;
		times++;
	}
	return (times);
}
