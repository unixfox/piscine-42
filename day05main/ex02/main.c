#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str);

int	main(int ac, char **argv)
{
	printf("%d\n", ft_atoi(argv[1]));
	printf("%d", atoi(argv[1]));
}