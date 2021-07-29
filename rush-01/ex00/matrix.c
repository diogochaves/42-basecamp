#include <stdio.h>

void	initiate_matrix(int matrix[6][6])
{
	int i;
	int j;
	i = 0;
	j = 0;

	while (i < 6)
	{
		while (j < 6)
		{
			matrix[i][j] = 0;
			j++;
		}
		j = 0;
		i++;
	}
}

void	print_matrix(int matrix[6][6])
{
	int i;
	int j;
	i = 0;
	j = 0;

	printf("\n");
	while (i < 6)
	{
		while (j < 6)
		{
			printf("%2d ", matrix[i][j]);
			j++;
		}
		printf("\n");
		j = 0;
		i++;
	}
	printf("\n");
}