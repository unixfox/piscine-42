int	*ft_range(int min, int max);

int main()
{
	int i;
	int *tab;
	int min;
	int max;

	min = 2;
	max = 10;
	i = 0;
	tab = ft_range(min, max);
	while (i < (max - min))
	{
		printf("tabii : %d\n", tab[i]);
		i++;
	}

}
