#include <io.h>

void	ft_putstr(char* str)
{
	int		idx;
	
	idx = sizeof(str);
	write(1, str, idx);
}

//int main() {
//	char* str = "ABCDEFG";
//	ft_putstr(str);
//}