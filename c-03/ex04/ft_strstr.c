char	*ft_strstr(char *str, char *to_find)
{
	char	*find;
	int		i;

	find = 0;
	i = 0;
	if (!*to_find)
		return (str);
	while (*str)
	{
		if (!to_find[i])
			break ;
		if (*str == to_find[i++])
		{
			if (!find)
				find = str;
		}
		else
		{
			find = 0;
			i = 0;
		}
		str++;
	}
	return (find);
}
