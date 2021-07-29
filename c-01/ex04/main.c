#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 3;
	ft_ultimate_div_mod(&a, &b);
	printf("Divisão: %d\n", a);
	printf("Módulo: %d\n", b);
	return (0);
}

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_a;
	int	temp_b;

	temp_a = *a;
	temp_b = *b;
	*a = temp_a / temp_b;
	*b = temp_a % temp_b;
}

