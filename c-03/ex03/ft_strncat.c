#include<stdio.h>

int	ft_strlen(char *s)
{
	char	*p;

	p = s;
	while (*p)
		p++;
	return (p - s);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*ptr;

	ptr = dest + ft_strlen(dest);
	while (*src && nb--)
		*ptr++ = *src++;
	*ptr = '\0';
	return (dest);
}
