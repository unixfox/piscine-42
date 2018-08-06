/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edevos <edevos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 16:21:48 by edevos            #+#    #+#             */
/*   Updated: 2018/07/23 15:28:31 by edevos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	**ft_split_whitespaces(char *str);

int		main(void)
{
	int		i;
	char	**tab;

	i = 0;
	tab = ft_split_whitespaces("la pomme tombre de l'arbre            ");
	while (tab[i] != '\0')
	{
		printf("%s\n", tab[i]);
		i++;
	}
	return (0);
}
