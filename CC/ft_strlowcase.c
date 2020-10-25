#include <stdio.h>

char* ft_strlowcase(char* str)
{
	char* c;

	c = str;
	while (*c)
	{
		if (*c >= 'A' && *c <= 'Z')
			*c += 32;
		printf("%c", *c);
		c++;
	}
	return (str);
}

int main()
{
	char str[] = "aBc-";
	char* s = ft_strlowcase(str);
	printf("%s", s);
}