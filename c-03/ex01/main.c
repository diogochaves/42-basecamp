#include<stdio.h>
#include<string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	str1a[] = "ABC";
	char	str2a[] = "ABCD";
	char	str1b[] = "ABC";
	char	str2b[] = "ABCD";

	printf("strncmp: %d\n", strncmp(str1a, str2a, 3));
	printf("ft_strncmp: %d\n", ft_strncmp(str1b, str2b, 3));

	return (0);
}
