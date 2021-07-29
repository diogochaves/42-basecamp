int	ft_str_is_lowercase(char str);
int	ft_str_is_alpha_numeric(char str);
char *ft_strlowcase(char *str);

char	*ft_strcapitalize(char *str)
{
	int	capitalize;
	int	i;

	capitalize = 1;
	i = 0;
	str = ft_strlowcase(str);
	while (str[i])
	{
		if (capitalize)
			if (ft_str_is_lowercase(str[i]))
				str[i] -= 32;
		if (!(ft_str_is_alpha_numeric(str[i])))
			capitalize = 1;
		else
			capitalize = 0;
		str++;
	}
	return (str);
}

int	ft_str_is_lowercase(char str)
{
	if (str < 'a' || str > 'z')
		return (0);
	return (1);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

int	ft_str_is_alpha_numeric(char str)
{
	if ((str >= 'A' && str <= 'Z') || (str >= 'a' && str <= 'z'))
		return (1);
	if (str >= '0' && str <= '9')
		return (1);
	return (0);
}
