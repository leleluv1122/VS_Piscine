#include <io.h>
#include <stdio.h>

void	ft_ft(int* nbr)
{
	*nbr = 42;
}

int	main() {
	int nbr;

	ft_ft(&nbr);
	printf("%d", nbr);
}