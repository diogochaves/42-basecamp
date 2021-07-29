#include<stdio.h>
#include<string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	str1a[] = "ABC";
	char	str2a[] = "A\0";
	char	str1b[] = "ABC";
	char	str2b[] = "A\0";

	printf("strcmp: %d\n", strcmp(str1a, str2a));
	printf("ft_strcmp: %d\n", ft_strcmp(str1b, str2b));
	return (0);
}
