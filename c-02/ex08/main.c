#include<stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char	str[] = "AbcdeFg12~fin.";

	printf("%s\n", str);
	ft_strlowcase(str);
	printf("%s\n", str);
}
