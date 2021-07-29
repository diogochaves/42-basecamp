#include<stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	str[6];
	int		nchars;

	nchars = 0;
	str[0] = 'T';
	str[1] = 'e';
	str[2] = 's';
	str[3] = 't';
	str[4] = 'e';
	str[5] = '\0';
	nchars = ft_strlen(str);
	printf("%d\n", nchars);
	return (0);
}
