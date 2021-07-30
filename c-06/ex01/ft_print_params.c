#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*arg;
	int		i;

	i = 1;
	while (argc > 1 && i < argc)
	{
		arg = argv[i++];
		while (*arg)
			write(1, arg++, 1);
		write(1, "\n", 1);
	}
	return (0);
}
