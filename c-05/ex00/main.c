#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	main(void)
{
	printf("\e[1;31m-- Exercício 00: \e[0m");

	if (ft_iterative_factorial(5) != 5*4*3*2*1)
		printf("KO, wrong 5 factorial");
	else if (ft_iterative_factorial(3) != 6)
		printf("KO, wrong 3 factorial");
	else if (ft_iterative_factorial(7) != 7*6*5*4*3*2*1)
		printf("KO, wrong 7 factorial");
	else if (ft_iterative_factorial(4) != 4*3*2*1)
		printf("KO, wrong 4 factorial");
	else if (ft_iterative_factorial(0) != 1)
		printf("KO, wrong 0 factorial");
	else if (ft_iterative_factorial(-3) != 0)
		printf("KO, wrong -3 factorial");
	else if (ft_iterative_factorial(2) != 2)
		printf("KO, wrong 2 factorial");
	else
		printf("OK\n");
}
