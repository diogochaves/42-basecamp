#include<stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	src[8] = "ABCDEFG";
	char	dest[10] = "123456789";

	printf ("%s|\n%s|\n", src, dest);
	ft_strncpy(dest, src, 5);
	printf ("%s|\n%s|\n", src, dest);
}
