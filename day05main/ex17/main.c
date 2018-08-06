#include <stdio.h>

char	*ft_strncat(char *dest, char *src, int nb);

int main()
{
	char dest[] = "";
	char src[] = "JnEcqDNaeaFMqKnOwFUgJDKRgThopyJFghD";

	ft_strncat(dest, src, 2);
	printf("%s", dest);
}