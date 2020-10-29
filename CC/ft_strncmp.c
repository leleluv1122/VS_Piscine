#include <stdio.h>
#include <string.h>

int ft_strncmp(char* s1, char* s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}

int main() {
	char cc[] = "ABC";
	char s1[] = " BCDE";
	char s2[] = " BCDEfg";
	char s3[] = "Bcde";
	char s4[] = "ACD";

	printf("%d\n", ft_strncmp(cc, s1, 2)); // 1
	printf("%d\n", ft_strncmp(s1, s2, 4)); // 0
	printf("%d\n", ft_strncmp(s1, s3, 4)); // -1
	printf("%d\n", ft_strncmp(s1, s3, 4)); // -1
}