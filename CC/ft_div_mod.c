#include <io.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int* div, int* mod)
{
	*div = a / b;
	*mod = a % b;
	//printf("%d %d", *div, *mod);
}

//int main() {
//	int a = 10, b = 4;
//	int c, d;
//	ft_div_mod(a, b, &c, &d);
//}