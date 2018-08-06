/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edevos <edevos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 16:42:55 by edevos            #+#    #+#             */
/*   Updated: 2018/07/26 16:31:47 by edevos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_sort(int *tab, int length, int(*f)(int, int));

int		ft_test(int a, int b)
{
	return (a-b);
}

int		main(void)
{
	int	tab1[6] = {0,5,6,8,1,5};
	int	tab2[0] = {};
	int	tab3[6] = {0,5,6,8,9,15};
	int	tab4[6] = {15,0,-5,-6,-8,-15};
	int tab5[] = {0,0,0,0,-5,-5,-5,-10,-20};

	printf("Tableau 1 (Non trie):\n%d (0 attendu)\n", ft_is_sort(tab1, 6, ft_test));
	printf("Tableau 2 (Vide):\n%d (1 attendu)\n", ft_is_sort(tab2, 0, ft_test));
	printf("Tableau 3 (Tri Croissant):\n%d (1 attendu)\n", ft_is_sort(tab3, 6, ft_test));
	printf("Tableau 4 (Tri Decroissant):\n%d (1 attendu)\n", ft_is_sort(tab4, 6, ft_test));
	printf("Tableau 5:\n%d (1 attendu)\n", ft_is_sort(tab5, 1, ft_test));
	return (0);
}
