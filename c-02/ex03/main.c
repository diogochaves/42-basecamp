#include<stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char str_a[8] = "AbCdEfG";
	char str_0[8] = "0123456";
	char str_mix[5] = "-&$,";
	char str_empty[1] = "";

	printf("A:%d\n", ft_str_is_numeric(str_a));
	printf("0:%d\n", ft_str_is_numeric(str_0));
	printf("~:%d\n", ft_str_is_numeric(str_mix));
	printf(" :%d\n", ft_str_is_numeric(str_empty));
}
