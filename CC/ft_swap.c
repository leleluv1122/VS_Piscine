//#include <io.h>
#include <stdio.h>

void	ft_swap(int* a, int* b)
{
	int		t;

	t = *a;
	*a = *b;
	*b = t;
	//printf("%d %d", *a, *b);
}
//int		main() 
//{
//	int a = 10, b = 20;
//	ft_swap(&a, &b);
//	return 0;
//}