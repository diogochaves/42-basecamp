#include<stdio.h>
#include<string.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	src1[] = "EFG";
	char	dest1[] = "ABCD";
	char	src2[] = "EFG";
	char	dest2[] = "ABCD";

	printf("src: %s\n", src2);
	printf("dest: %s\n", dest2);
	printf("strcmp: %s\n", strcat(dest1, src1));
	printf("ft_strcat: %s\n", ft_strcat(dest2, src2));
	return (0);
}
