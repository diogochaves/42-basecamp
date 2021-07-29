char	*ft_strcpy(char *dest, char *src)
{
	char	*dest_orig;

	dest_orig = dest;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (dest_orig);
}
