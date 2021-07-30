#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*arg;

	if (argc)
	{
		arg = argv[0];
		while (*arg)
			write(1, arg++, 1);
		write(1, "\n", 1);
	}
	return (0);
}
