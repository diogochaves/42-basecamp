#include <stdio.h>
#include <time.h>
#include <limits.h>

int	ft_fibonacci(int index);

int	main(void)
{
	printf("\e[1;31m-- Exercício 04: \e[0mCalculando....");
	fflush(stdout);

	int ret;

	if ((ret = ft_fibonacci(0)) != 0)
		printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\bKO, fibo 0 is 0, got %i", ret);
	else if ((ret = ft_fibonacci(1)) != 1)
		printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\bKO, fibo 1 is 1, got %i", ret);
	else if ((ret = ft_fibonacci(2)) != 1)
		printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\bKO, fibo 2 is 1, got %i", ret);
	else if ((ret = ft_fibonacci(3)) != 2)
		printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\bKO, fibo 3 is 2, got %i", ret);
	else if ((ret = ft_fibonacci(4)) != 3)
		printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\bKO, fibo 4 is 3, got %i", ret);
	else if ((ret = ft_fibonacci(5)) != 5)
		printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\bKO, fibo 5 is 5, got %i", ret);
	else if ((ret = ft_fibonacci(6)) != 8)
		printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\bKO, fibo 6 is 8, got %i", ret);
	else if ((ret = ft_fibonacci(6)) != 8)
		printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\bKO, fibo 6 is 8, got %i", ret);
	else if ((ret = ft_fibonacci(-27)) != -1)
		printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\bKO, fibo -27 is -1, got %i", ret);
	else if ((ret = ft_fibonacci(-23532)) != -1)
		printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\bKO, fibo -23532 is -1, got %i", ret);
#ifndef FAST
	else if ((ret = ft_fibonacci(20)) != 6765)
		printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\bKO, fibo 20 is 6765, got %i", ret);
	else if ((ret = ft_fibonacci(40)) != 102334155)
		printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\bKO, fibo 40 is 102334155, got %i", ret);
#endif
	else
		printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\bOK");
	printf("               \n");
}
