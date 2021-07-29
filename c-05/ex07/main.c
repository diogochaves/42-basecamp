#include <stdio.h>
#include <time.h>
#include <limits.h>

int	ft_find_next_prime(int nb);

int main(void)
{
	int ret;
	
	printf("\e[1;31m-- Exercício 07: \e[0mCalculando....");
	fflush(stdout);

	time_t time_bef;
	time(&time_bef);

	if ((ret = ft_find_next_prime(0)) != 2) printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\bKO, prime after 0 is 2, got %i", ret);
	else if ((ret = ft_find_next_prime(1)) != 2) printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\bKO, prime after 1 is 2, got %i", ret);
	else if ((ret = ft_find_next_prime(2)) != 2) printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\bKO, prime after 2 is 2, got %i", ret);
	else if ((ret = ft_find_next_prime(8)) != 11) printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\bKO, prime after 8 is 11, got %i", ret);
	else if ((ret = ft_find_next_prime(4)) != 5) printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\bKO, prime after 4 is 5, got %i", ret);
	else if ((ret = ft_find_next_prime(13)) != 13) printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\bKO, prime after 4 is 5, got %i", ret);
	else if ((ret = ft_find_next_prime(5982)) != 5987) printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\bKO, prime after 5982 is 5987, got %i", ret);
	else if ((ret = ft_find_next_prime(2000000000)) != 2000000011) printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\bKO, prime after 2000000000 is 2000000011, got %i", ret);
	else if ((ret = ft_find_next_prime(INT_MAX - 11)) != INT_MAX) printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\bKO, prime after INT_MAX - 11 is INT_MAX, got %i", ret);
	else if ((ret = ft_find_next_prime(-50)) != 2) printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\bKO, prime after -50 is 2, got %i", ret);
	else if ((time_bef = (time(NULL) - time_bef)) > 10) printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\bKO, timeout! max time is 10 seconds, took %li", time_bef);
	else
		printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\bOK, time: %li seconds", time_bef);

	printf("               \n");

	return (0);
}