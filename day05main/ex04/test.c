char	*ft_strncpy(char *dest, const char *src, unsigned int n);

int main()
{
	char dest[] = "abcde";
	char src[] = "ab";

	printf("%s", ft_strncpy(dest, src, 4));
	printf("%s", dest);
}