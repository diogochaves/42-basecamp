#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	div;
	int	mod;
	int	*ptr_div;
	int	*ptr_mod;

	div = -100;
	mod = -99;
	ptr_div = &div;
	ptr_mod = &mod;
	ft_div_mod(10, 3, ptr_div, ptr_mod);
	printf("Divisão: %d\n", div);
	printf("Módulo: %d\n", mod);
	return (0);
}
