#include <unistd.h>

void	ft_print_comb2(void)
{
	int		number_a;
	int		number_b;
	char	str;

	write(1, "00 01", 5);
	number_a = 0;
	number_b = 2;
	while (number_a <= 98 && number_b <= 99)
	{
		write(1, ", ", 2);
		str = number_a / 10 + '0';
		write(1, &str, 1);
		str = number_a % 10 + '0';
		write(1, &str, 1);
		write(1, " ", 1);
		str = number_b / 10 + '0';
		write(1, &str, 1);
		str = number_b % 10 + '0';
		write(1, &str, 1);
		number_b++;
		if (number_b == 100)
		{
			number_b = ++number_a + 1;
		}
	}
}
