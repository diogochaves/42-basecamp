#include<stdio.h>
#include<string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char	src1[] = "DEFGH  ";
	char	dest1[] = "ABC";
	char	src2[] = "DEFGH  ";
	char	dest2[] = "ABC";

	printf("src: %s\n", src2);
	printf("dest: %s\n", dest2);
	printf("strncat: %s\n", strncat(dest2, src2, 5));
	printf("ft_strcat: %s\n", ft_strncat(dest1, src1, 5));
	return (0);
}
