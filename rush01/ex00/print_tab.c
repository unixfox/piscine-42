/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_tab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edevos <edevos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 14:53:17 by alhenry           #+#    #+#             */
/*   Updated: 2018/07/15 21:51:40 by edevos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c);

void	print_tab(char **tab)
{
	int i;
	int j;

	i = 1;
	j = 0;
	while (i <= 9)
	{
		while (tab[i][j] != '\0')
		{
			ft_putchar(tab[i][j]);
			if (j >= 0 && j < 8)
				ft_putchar(' ');
			j++;
		}
		j = 0;
		ft_putchar('\n');
		i++;
	}
}
