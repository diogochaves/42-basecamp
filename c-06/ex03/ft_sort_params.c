#include <unistd.h>

int		ft_strcmp(char *s1, char *s2);
void	ft_sort_params(int argc, char **argv);
void	ft_print_params(int argc, char **argv);

int	main(int argc, char **argv)
{
	ft_sort_params(argc - 1, argv + 1);
	ft_print_params(argc, argv);
	return (0);
}

void	ft_sort_params(int argc, char **argv)
{
	int		i;
	char	*temp;

	while (argc > 0)
	{
		i = 0;
		while (++i < argc)
		{
			if (ft_strcmp(argv[i - 1], argv[i]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[i - 1];
				argv[i - 1] = temp;
			}
		}
		argc--;
	}
}

void	ft_print_params(int argc, char **argv)
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
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (*s1 || *s2)
	{
		i = *s1 - *s2;
		if (i != 0)
			break ;
		s1++;
		s2++;
	}
	return (i);
}
