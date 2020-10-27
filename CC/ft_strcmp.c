#include <string.h>
#include <stdio.h>

int ft_strcmp(char* s1, char* s2)
{
	int		idx;

	idx = 0;
	while (1)
	{
		if (s1[idx] == '\0' && s2[idx] == '\0')
			break ;
		else if (s1[idx] == '\0')
			return (-1);
		else if (s2[idx] == '\0')
			return (1);
		if (s1[idx] > s2[idx])
			return (1);
		else if (s1[idx] < s2[idx])
			return (-1);
		idx++;
	}
	return (0);
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
	// -1 1

	printf("%d ,", ft_strcmp(s1, s2)); // 0
	printf("%d ,", ft_strcmp(s1, s3)); // -1
	printf("%d", ft_strcmp(s1, s4));   // 1
}