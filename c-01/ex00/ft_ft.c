#include<stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	number;

	number = 0;
	ft_ft(&number);
	printf("%d \n", number);
	return (0);
}

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
