#include <io.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int* a, int* b)
{
	int c = *a / *b;
	int d = *a % *b;

	*a = c;
	*b = d;
	printf("%d %d", *a, *b);
}

int main() {
	int a = 10, b = 3;
	ft_ultimate_div_mod(&a, &b);
}