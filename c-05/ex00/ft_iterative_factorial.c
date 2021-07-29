int	ft_iterative_factorial(int nb)
{
	int	factorial;

	factorial = 1;
	if (nb < 0)
		return (0);
	while (nb)
		factorial *= nb--;
	return (factorial);
}
