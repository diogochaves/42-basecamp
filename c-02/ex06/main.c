#include<stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char	print[] = "Normal";
	char	unprint[] = "\t (tab), \a (?)";
	char	empty[] = "";

	printf("%s:%d\n", print, ft_str_is_printable(print));
	printf("%s:%d\n", unprint, ft_str_is_printable(unprint));
	printf(" :%d\n-----\n", ft_str_is_printable(empty));
	return (0);
}
