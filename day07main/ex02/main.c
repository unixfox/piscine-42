#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main()
{
	int *range;

	ft_ultimate_range(&range, 0, 5);
	for (int i = 0; i < 5; i++)
		printf("%d\n", range[i]);
}
