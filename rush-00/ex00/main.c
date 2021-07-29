void	rush(int x, int y);

int	str_to_int(char *str)
{
	int	number;
	int	i;

	number = 0;
	i = 0;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		number = (number * 10) + (str[i] - '0');
		i++;
	}
	return (number);
}

int	main(int argc, char *argv[])
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	if (argc >= 3)
	{
		x = str_to_int(argv[1]);
		y = str_to_int(argv[2]);
	}
	rush(x, y);
	return (0);
}
