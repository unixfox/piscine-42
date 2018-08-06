int		main(void)
{
	char **tab;

	tab = ft_split_whitespaces("salut comment	ca va");
	ft_print_words_tables(tab);
	return (0);
}