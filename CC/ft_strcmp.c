#include <string.h>
#include <stdio.h>

int	ft_strcmp(char* s1, char* s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

int main() {
	char s1[] = "BCDE";
	char s2[] = "BCDE";
	char s3[] = "BCdE";
	char s4[] = "ACDE";
	
	char d1[] = "ABC";
	char d2[] = "ABCD";
	char d3[] = "AB";

	printf("%d %d\n", ft_strcmp(d1, d2), ft_strcmp(d1, d3));

	printf("%d ,", ft_strcmp(s1, s2));
	printf("%d ,", ft_strcmp(s1, s3));
	printf("%d", ft_strcmp(s1, s4));
}