#include<stdio.h>
#include<bsd/string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	src1[] = "ABCDEFG";
	char	dest1[] = "123456789";
	char	src2[] = "ABCDEFG";
	char	dest2[] = "123456789";
	int	ft_return1;
	int	ft_return2;

	ft_return1 = 0;
	ft_return2 = 0;
	printf ("SRC: %s\nORI: %s\n-\n", src1, dest1);
	ft_return1 = strlcpy(dest1, src1, 9);
	printf ("strlcpy: %s | %d\n-\n", dest1, ft_return1);
	ft_return2 = ft_strlcpy(dest2, src2, 9);
	printf ("ft_strlcpy: %s | %d\n-\n", dest2, ft_return2);
}
