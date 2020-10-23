//#include <io.h>
#include <stdio.h>
//#include <unistd.h>

char* ft_strupcase(char* str)
{
	char* c;

	c = str;
	while (*c)
	{
		if (*c >= 'a' && *c <= 'z')
			*c -= 32;
		printf("%c ", *c);
		c++;
	}
	return (str);
}
