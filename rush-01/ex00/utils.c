#include <stdio.h>

int ft_stoi(char *str)
{
	int result;
	result = 0;

	for (int i = 0; str[i] != '\0'; ++i) {
		if (str[i]> '9' || str[i]<'0')
			return -1;
		result = result*10 + str[i] - '0';
	}

	return result;
}

int show_message(char *message)
{
	printf("Erro: %s\n", message);
	return -1;
}
