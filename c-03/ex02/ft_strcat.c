int	ft_strlen(char *s)
{
	char	*p;

	p = s;
	while (*p)
		p++;
	return (p - s);
}

char	*ft_strcat(char *dest, char *src)
{
	int	dest_len;

	dest_len = ft_strlen(dest);
	while (*src)
		dest[dest_len++] = *src++;
	dest[dest_len] = '\0';
	return (dest);
}
