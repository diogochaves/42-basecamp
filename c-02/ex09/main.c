#include<stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	str[] = "oi, tudo bem? 42paLAVRAS quarenta-e-duas; cinquenta+e+um";

	printf("%s\n", str);
	ft_strcapitalize(str);
	printf("%s\n", str);
}
