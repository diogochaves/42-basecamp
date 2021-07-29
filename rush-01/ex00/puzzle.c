#include<stdio.h>

void	check_possibilities(int *numbers, int matrix[6][6]);
void	print_matrix(int matrix[6][6]);
void	find_number(int *numbers, int matrix[6][6]);

int	add_number(int num, int *numbers, int value, int *position)
{
	if (!*position)
	{
		*position = value;
		numbers[num]++;
		numbers[0]--;
	}
	else if (*position != value)
	{
		printf("\n******************************************\n");
		printf("ERRO: Já tem um valor no local. Valor diferente do que será atribuído.");
		printf("\n******************************************\n\n");
		return (1);
	}
	return (0);
}

void	print_numbers(int *numbers)
{
	int	i;
	i = 0;

	printf("Números no tabuleiro\n");
	while (i <= 4)
	{
		printf("%d: %d\n", i, numbers[i]);
		i++;
	}
}

int	puzzle(int matrix[6][6])
{
	// 1- Onde há 1 no entorno, há um v8;
	int	l;
	int	c;
	int	numbers[5];

	l = 1;
	c = 1;
	numbers[0] = 16;
	numbers[1] = 0;
	numbers[2] = 0;
	numbers[3] = 0;
	numbers[4] = 0;

	while (l <= 4)
	{
		if (matrix[l][0] == 1)
			add_number(4, numbers, 8, &matrix[l][1]);
		if (matrix[l][5] == 1)
			add_number(4, numbers, 8, &matrix[l][4]);
		l++;
	}

	while (c <= 4)
	{
		if (matrix[0][c] == 1)
			add_number(4, numbers, 8, &matrix[1][c]);
		if (matrix[5][c] == 1)
			add_number(4, numbers, 8, &matrix[4][c]);
		c++;
	}

	// 2- Onde há 4 no entorno, há uma sequência v1, v2, v4, v8; 
	l = 1;
	c = 1;
	while (l <= 4)
	{
		if (matrix[l][0] == 4)
		{
			add_number(1, numbers, 1, &matrix[l][1]);
			add_number(2, numbers, 2, &matrix[l][2]);
			add_number(3, numbers, 4, &matrix[l][3]);
			add_number(4, numbers, 8, &matrix[l][4]);
		}
		if (matrix[l][5] == 4)
		{
			add_number(1, numbers, 1, &matrix[l][4]);
			add_number(2, numbers, 2, &matrix[l][3]);
			add_number(3, numbers, 4, &matrix[l][2]);
			add_number(4, numbers, 8, &matrix[l][1]);
		}
		l++;
	}
	while (c <= 4)
	{
		if (matrix[0][c] == 4)
		{
			add_number(1, numbers, 1, &matrix[1][c]);
			add_number(2, numbers, 2, &matrix[2][c]);
			add_number(3, numbers, 4, &matrix[3][c]);
			add_number(4, numbers, 8, &matrix[4][c]);
		}
		if (matrix[5][c] == 4)
		{
			add_number(1, numbers, 1, &matrix[4][c]);
			add_number(2, numbers, 2, &matrix[3][c]);
			add_number(3, numbers, 4, &matrix[2][c]);
			add_number(4, numbers, 8, &matrix[1][c]);
		}
		c++;
	}

	// 3 - Se houver um 2 no entorno oposto a um v8, há um v4 adjacente ao 2 do entorno;
	c = 1;
	l = 1;
	while (l <= 4)
	{
		if (matrix[l][0] == 2 && matrix[l][4] == 8)
			add_number(3, numbers, 4, &matrix[l][1]);
		if (matrix[l][5] == 2 && matrix[l][1] == 8)
			add_number(3, numbers, 4, &matrix[l][4]);
		l++;
	}

	while (c <= 4)
	{
		if (matrix[0][c] == 2 && matrix[4][c] == 8)
			add_number(3, numbers, 4, &matrix[1][c]);
		if (matrix[5][c] == 2 && matrix[1][c] == 8)
			add_number(3, numbers, 4, &matrix[4][c]);
		c++;
	}

	print_numbers(numbers);

	// 4 - possibilities
	check_possibilities(numbers, matrix);

	// 5 - find number
	find_number(numbers, matrix);

	return (0);
}

int	count_num_line(int *numbers, int matrix[6][6], int l)
{
	int	c;
	int	value;

	c = 1;
	value = 0;
	while (c <= 4)
	{
		value += matrix[l][c];
		c++;
	}
	return (value);
}

void	insert_guess_line(int *numbers, int matrix[6][6], int l, int value)
{
	int	c;

	c = 1;
	while (c <= 4)
	{
		if (matrix[l][c] != 1 && matrix[l][c] != 2 && matrix[l][c] != 4 && matrix[l][c] != 8)
		{
			matrix[l][c] = 15 - value;
		}
		c++;
	}
}

int	count_num_col(int *numbers, int matrix[6][6], int c)
{
	int	l;
	int	value;

	l = 1;
	value = 0;
	while (l <= 4)
	{
		if (matrix[l][c] == 1 || matrix[l][c] == 2 || matrix[l][c] == 4 || matrix[l][c] == 8)
			value += matrix[l][c];
		l++;
	}
	return (15 - value);
}

void	insert_guess_col(int *numbers, int matrix[6][6], int c, int value)
{
	int	l;

	l = 1;
	while (l <= 4)
	{
		if (matrix[l][c] != 1 && matrix[l][c] != 2 && matrix[l][c] != 4 && matrix[l][c] != 8)
		{
			if (value < matrix[l][c])
				matrix[l][c] = value;
		}
		l++;
	}
}

void	check_possibilities(int *numbers, int matrix[6][6])
{
	int	i;
	int value;

	i = 1;
	while (i <= 4)
	{
		value = count_num_line(numbers, matrix, i);
		insert_guess_line(numbers, matrix, i, value);
		i++;
	}

	i = 1;
	while (i <= 4)
	{
		value = count_num_col(numbers, matrix, i);
		insert_guess_col(numbers, matrix, i, value);
		i++;
	}

}

void	find_number_at_line(int *numbers, int matrix[6][6], int l, int combinations[16][4])
{
	int	c;

	c = 1;
	while (c <= 4)
	{
		if (matrix[l][c] != 1 && matrix[l][c] != 2 && matrix[l][c] != 4 && matrix[l][c] != 8)
		{
			int j;

			j = 0;
		}
		c++;
	}
}

void	find_number(int *numbers, int matrix[6][6])
{
	int	i;
	int combinations[16][4] = 
	{
		{0},
		{1},
		{2},
		{1, 2},
		{4},
		{1, 4},
		{2, 4},
		{1, 2, 4},
		{8},
		{1, 8},
		{2, 8},
		{1, 2, 8},
		{4, 8},
		{1, 4, 8},
		{2, 4, 8},
		{1, 2, 4, 8},
	};

	i = 1;
	while (i <= 4)
	{
		find_number_at_line(numbers, matrix, i, combinations);
		i++;
	}
}