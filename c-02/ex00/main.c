#include<stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	src[8] = "string1";
	char	dest[10] = "string2__";

	printf ("%s\n%s\n", src, dest);
	ft_strcpy(dest, src);
	printf ("%s\n%s\n", src, dest);
}
