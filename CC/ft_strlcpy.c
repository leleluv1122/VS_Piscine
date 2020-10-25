#include <stdio.h>

unsigned int ft_strlcpy(char* dest, char* src, unsigned int size)
{
	char* c;
	int idx;

	c = src;
	idx = 0;
	size--;
	while (size--)
	{
		dest[idx] = *c;
		c++;
		idx++;
	}
	dest[idx] = '\0';
	return (dest);
}

int main() {
	char* c = "123456";
	char d[4];
	int idx = 0;
	ft_strlcpy(d, c, 4);
	printf("%s", d);
}