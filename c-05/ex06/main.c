#include <stdio.h>

int	ft_is_prime(int nb);

int	main(void)
{
	int ret;
	
	printf("\e[1;31m-- Exercício 06: \e[0m");

	if ((ret = ft_is_prime(0)) != 0) printf("KO, 0 is not prime\n");
	else if ((ret = ft_is_prime(1)) != 0) printf("KO, 1 is not prime\n");
	else if ((ret = ft_is_prime(4)) != 0) printf("KO, 4 is not prime\n");
	else if ((ret = ft_is_prime(-3)) != 0) printf("KO, -3 is not prime\n");
	else if ((ret = ft_is_prime(-7)) != 0) printf("KO, -7 is not prime\n");
	else if ((ret = ft_is_prime(-8)) != 0) printf("KO, -8 is not prime\n");
	else if ((ret = ft_is_prime(9)) != 0) printf("KO, 9 is not prime\n");
	else if ((ret = ft_is_prime(50)) != 0) printf("KO, 50 is not prime\n");
	else if ((ret = ft_is_prime(234521)) != 0) printf("KO, 234521 is not prime\n");
	else if ((ret = ft_is_prime(2)) != 1) printf("KO, 2 is prime\n");
	else if ((ret = ft_is_prime(3)) != 1) printf("KO, 3 is prime\n");
	else if ((ret = ft_is_prime(11)) != 1) printf("KO, 11 is prime\n");
	else if ((ret = ft_is_prime(13)) != 1) printf("KO, 13 is prime\n");
	else if ((ret = ft_is_prime(5987)) != 1) printf("KO, 5987 is prime\n");
	else if ((ret = ft_is_prime(3023)) != 1) printf("KO, 3023 is prime\n");
	else
		printf("OK\n");
}
