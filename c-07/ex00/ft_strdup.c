#include<stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dup;
	int		i;

	i = 0;
	while (src[i])
		i++;
	dup = malloc(i + 1);
	if (dup)
	{
		dup[i] = '\0';
		while (i--)
			dup[i] = src[i];
	}
	return (dup);
}
