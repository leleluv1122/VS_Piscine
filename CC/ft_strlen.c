#include <io.h>
#include <stdio.h>

int		ft_strlen(char* str)
{
	int		size;
	char	*s;

	size = 0;
	s = str;
	while (1) {
		if (*s == '\0')
			break;
		size++;
		s++;
	}

	return size;
}