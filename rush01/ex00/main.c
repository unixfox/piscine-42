/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edevos <edevos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 14:48:20 by alhenry           #+#    #+#             */
/*   Updated: 2018/07/15 22:00:42 by edevos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>

void	print_tab(char **tab);
void	verif_ligne(char **tab, char nb);
void	verif_collone(char **tab, char nb);
void	case_individuel(char **tab, int x, int y, char nb);
void	verif_case(char **tab, char nb);
void	vide(char **tab);
void	methodique(char **tab, char nb);
char	**backtrack(char **tab);

int		main(int argc, char **argv)
{
	char **tab;

	tab = backtrack(argv);
	if (tab != NULL)
		print_tab(tab);
	else
		write(1, "Error\n", 6);
	argc = 2;
	return (0);
}
