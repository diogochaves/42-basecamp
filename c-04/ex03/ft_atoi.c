#include <stdio.h>

int	ft_atoi(char *str)
{
	int	num;
	int	sign;

	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	sign = 1;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -sign;
		++str;
	}
	num = 0;
	while (*str >= '0' && *str <= '9')
	{
		num *= 10;
		num += *str - '0';
		++str;
	}
	return (sign * num);
}
