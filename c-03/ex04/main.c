#include<stdio.h>
#include<string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	haystack_needle[] = "Find the needle in the Haystack";
	char	haystack[] = "Just a Haystack";
	char	needle[] = "needle";

	printf("1st: %s\n", haystack_needle);
	printf("2nd: %s\n", haystack);
	printf("3nd: %s\n", needle);
	printf("---: %s\n", needle);
	printf("strstr 1st: %s\n", strstr(haystack_needle, needle));
	printf("strstr 2st: %s\n", strstr(haystack, needle));
	printf("strstr 3st: %s\n", strstr(needle, needle));
	printf("strstr 3st: %s\n", strstr(needle, ""));
	printf("strstr 3st: %s\n", strstr(haystack, " "));
	printf("---\n");
	printf("ft_strstr 1st: %s\n", ft_strstr(haystack_needle, needle));
	printf("ft_strstr 2st: %s\n", ft_strstr(haystack, needle));
	printf("ft_strstr 3st: %s\n", ft_strstr(needle, needle));
	printf("ft_strstr 3st: %s\n", ft_strstr(needle, ""));
	printf("ft_strstr 3st: %s\n", ft_strstr(haystack, " "));
	return (0);
}
