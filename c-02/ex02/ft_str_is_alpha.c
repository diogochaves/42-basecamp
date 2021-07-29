int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (*str < 'A' || *str > 'z' || (*str > 'Z' && *str < 'a'))
			return (0);
		str++;
	}
	return (1);
}
