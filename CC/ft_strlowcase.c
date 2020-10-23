#include <stdio.h>

char* ft_strlowcase(char* str)
{
	char* c;

	c = str;
	while (*c)
	{
		if (*c >= 'A' && *c <= 'Z')
			*c -= 32;
		printf("%c ", *c);
		c++;
	}
	return (str);
}