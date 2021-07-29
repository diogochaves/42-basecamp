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
