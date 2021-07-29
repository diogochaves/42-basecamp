#include<unistd.h>

void	ft_tohex(int ascii)
{
	char	hex;

	write(1, "\\", 1);
	if (ascii / 16 >= 1)
	{
		hex = (ascii / 16) + 48;
		write(1, &hex, 1);
	}
	if (ascii % 16 >= 10)
	{
		write(1, "0", 1);
		hex = (ascii % 16) + 87;
	}
	else
		hex = (ascii % 16) + 48;
	write(1, &hex, 1);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str <= 31 || *str >= 127)
			ft_tohex(*str);
		else
			write(1, str, 1);
		str++;
	}
}
