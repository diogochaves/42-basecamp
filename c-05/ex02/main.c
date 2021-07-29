#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int	main(void)
{
	printf("\e[1;31m-- Exercício 02: \e[0m");

	if (ft_iterative_power(2, 2) != 4)
		printf("KO, wrong 2 ^ 2\n");
	else if (ft_iterative_power(4, 2) != 16)
		printf("KO, wrong 4 ^ 2\n");
	else if (ft_iterative_power(3, 3) != 27)
		printf("KO, wrong 3 ^ 3\n");
	else if (ft_iterative_power(2, 4) != 16)
		printf("KO, wrong 2 ^ 4\n");
	else if (ft_iterative_power(47, 0) != 1)
		printf("KO, wrong 47 ^ 0\n");
	else if (ft_iterative_power(47, -5) != 0)
		printf("KO, wrong 47 ^ -5\n");
	else
		printf("OK\n");
	return (0);
}
