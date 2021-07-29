#include<stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char str_aa[8] = "AbCdEfG";
	char str_a[8] = "ABCDEFG";
	char str_0[8] = "0123456";
	char str_mix[5] = "-&$,";
	char str_empty[1] = "";

	printf("Aa:%d\n", ft_str_is_uppercase(str_aa));
	printf("A:%d\n", ft_str_is_uppercase(str_a));
	printf("0:%d\n", ft_str_is_uppercase(str_0));
	printf("~:%d\n", ft_str_is_uppercase(str_mix));
	printf(" :%d\n", ft_str_is_uppercase(str_empty));
}
