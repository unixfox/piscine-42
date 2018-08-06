#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int main(void)
{
	char dest[] = "";
	char src[]  = "";

	printf("%s\n", ft_strcpy(dest, src));
	printf("%s\n", dest);

	char destt[] = "";
	char srcc[]  = "";

	printf("%s\n", ft_strcpy(destt, srcc));
	printf("%s", destt);
}