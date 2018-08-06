#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int main()
{
	char dest[] = "";
	char src[] = "JnEcqDNaeaFMqKnOwFUgJDKRgThopyJFghD";

	ft_strcat(dest, src);
	printf("%s", dest);
}