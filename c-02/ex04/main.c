#include<stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char str_aa[8] = "AbCdEfG";
	char str_a[8] = "abcdefg";
	char str_0[8] = "0123456";
	char str_mix[5] = "-&$,";
	char str_empty[1] = "";

	printf("Aa:%d\n", ft_str_is_lowercase(str_aa));
	printf("a:%d\n", ft_str_is_lowercase(str_a));
	printf("0:%d\n", ft_str_is_lowercase(str_0));
	printf("~:%d\n", ft_str_is_lowercase(str_mix));
	printf(" :%d\n", ft_str_is_lowercase(str_empty));
}
