#include<stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;
	int	*ptr_a;
	int	*ptr_b;

	a = 1;
	b = 2;
	ptr_a = &a;
	ptr_b = &b;
	printf("Valor A: %d\n", a);
	printf("Valor B: %d\n", b);
	ft_swap(ptr_a, ptr_b);
	printf("Valor A: %d\n", a);
	printf("Valor B: %d\n", b);
	return (0);
}
