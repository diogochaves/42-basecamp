int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	if (!n)
		return (0);
	while ((*s1 || *s2) && n--)
	{
		i = *s1 - *s2;
		if (i != 0)
			break ;
		s1++;
		s2++;
	}
	return (i);
}
