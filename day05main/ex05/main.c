#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main()
{
	printf("%s\n", ft_strstr("salut", "l"));
	printf("%s", strstr("salut", "l"));
}