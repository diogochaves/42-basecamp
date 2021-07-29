#include <unistd.h>
#include <stdio.h>

int	ft_stoi(char *str);
int	show_message(char *message);
void	initiate_matrix(int matrix[6][6]);
void	print_matrix(int matrix[6][6]);
int	check_initial_values(int argc, char **argv, int matrix[6][6]);
int	puzzle(int matrix[6][6]);

int	main(int argc, char **argv)
{
	int	matrix[6][6];

	initiate_matrix(matrix);

	check_initial_values(argc, argv, matrix);

	// Parte 3: puzzle
	// - Resolver o jogo
	// -- Retornar: concluído / erro
	puzzle(matrix);

	// Teste dos resultado
	print_matrix(matrix);

	// Parte 4: print_result
	// - Imprimir resultado
	//print_result();

	return (0);
}

//Parte 1: check_initial_values
int check_initial_values(int argc, char **argv, int matrix[6][6])
{
	if(argc != 17)
	{
		return(show_message("a quantidade de argumentos deve ser 16."));
	};
	int i = 1;
	while(i<argc)
	{
		if((ft_stoi(argv[i]) < 1) || ft_stoi(argv[i]) > 4)
		{
			return(show_message("os valores dos rótulos devem ser 1, 2, 3 ou 4."));
		};
		// side numbers
		if (i <= 4)
			matrix[0][i] = ft_stoi(argv[i]);
		else if (i <= 8)
			matrix[5][i-4] = ft_stoi(argv[i]);
		else if (i <= 12)
			matrix[i-8][0] = ft_stoi(argv[i]);
		else
			matrix[i-12][5] = ft_stoi(argv[i]);
		i++;
	};
	return 0;
}