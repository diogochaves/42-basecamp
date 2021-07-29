#include<unistd.h>

void	ft_putstr(char *str);

int	main(void)
{
	char	str[6];

	str[0] = 'T';
	str[1] = 'e';
	str[2] = 's';
	str[3] = 't';
	str[4] = 'e';
	str[5] = '\0';
	write(1, str, sizeof(str));
	write(1, "\n", 1);
	ft_putstr(str);
	return (0);
}
