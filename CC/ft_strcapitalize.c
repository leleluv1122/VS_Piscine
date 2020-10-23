#include <stdio.h>

char* ft_strcapitalize(char* str)
{
	char* c;
	int idx;

	c = str;
	idx = 0;
	while (*c)
	{
		if (idx == 0)
		{
			if (*c >= 'a' && *c <= 'z')
			{
				*c -= 32;
				idx++;
			}
		}
		else if (!((*c >= 'a' && *c <= 'z') || (*c >= 'A' && *c <= 'Z')))
			idx = 0;
		else
			idx++;
		// printf("%c", *c);
		c++;
	}
	return (str);
}

int main()
{
	char* str = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char* rst = ft_strcapitalize(str);
	printf("%s", rst);
}