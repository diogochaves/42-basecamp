#include <stdio.h>

int ft_sqrt(int nb);

int	main(void)
{
	int ret;
	
	printf("\e[1;31m-- Exercício 05: \e[0m");

	if ((ret = ft_sqrt(4)) != 2) printf("KO, sqrt 4 is 2, got %i\n", ret);
	else if ((ret = ft_sqrt(16)) != 4) printf("KO, sqrt 16 is 4, got %i\n", ret);
	else if ((ret = ft_sqrt(64)) != 8) printf("KO, sqrt 64 is 8, got %i\n", ret);
	else if ((ret = ft_sqrt(9)) != 3) printf("KO, sqrt 9 is 3, got %i\n", ret);
	else if ((ret = ft_sqrt(81)) != 9) printf("KO, sqrt 81 is 9, got %i\n", ret);
	else if ((ret = ft_sqrt(49)) != 7) printf("KO, sqrt 49 is 7, got %i\n", ret);
	else if ((ret = ft_sqrt(121)) != 11) printf("KO, sqrt 121 is 11, got %i\n", ret);
	else if ((ret = ft_sqrt(25)) != 5) printf("KO, sqrt 25 is 5, got %i\n", ret);
	else if ((ret = ft_sqrt(21)) != 0) printf("KO, sqrt 21 is 0, got %i\n", ret);
	else if ((ret = ft_sqrt(2)) != 0) printf("KO, sqrt 2 is 0, got %i\n", ret);
	else if ((ret = ft_sqrt(2209)) != 47) printf("KO, sqrt 2209 is 47, got %i\n", ret);
	else
		printf("OK\n");
}
