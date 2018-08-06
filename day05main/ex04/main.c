#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
	char dest[] = "ab";
	char src[]  = "salut";

	printf("strncpy : %s\n", ft_strncpy(dest, src, 4));
	printf("dest : %s\n", dest);
	

	char destt[] = "ab";
	char srcc[]  = "salut";

	printf("strncpy : %s\n", strncpy(destt, srcc, 4));
	printf("destt : %s\n", destt);
}