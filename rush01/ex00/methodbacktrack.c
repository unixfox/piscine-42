/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   methodbacktrack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edevos <edevos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 14:45:07 by alhenry           #+#    #+#             */
/*   Updated: 2018/07/15 22:25:21 by alhenry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	verif_ligne(char **tab, char nb);
void	verif_collone(char **tab, char nb);
void	verif_case(char **tab, char nb);
void	vide(char **tab);
int		placer_nb(char **tab);
char	**backtrack(char **tab);

void	methodique(char **tab, char nb)
{
	verif_ligne(tab, nb);
	verif_collone(tab, nb);
	verif_case(tab, nb);
}

int		tab_vide(char **tab)
{
	int i;
	int j;

	i = 1;
	while (i <= 9)
	{
		j = 0;
		while (j < 9)
		{
			if (tab[i][j++] == '.')
				return (0);
		}
		i++;
	}
	return (1);
}

char	**backtrack2(char **tab, int i, int j, char nb)
{
	if (tab[i][j] == '.')
	{
		tab[i][j] = nb;
		if (backtrack(tab) != NULL && tab_vide(tab) == 1)
			return (tab);
		vide(tab);
		methodique(tab, nb);
		tab[i][j] = '.';
	}
	return (0);
}

char	**backtrack(char **tab)
{
	char	nb;
	int		i;
	int		j;

	nb = '0';
	while (++nb <= '9')
	{
		vide(tab);
		methodique(tab, nb);
		if (placer_nb(tab) == 1 && tab_vide(tab) == 1)
			return (tab);
		else if (tab_vide(tab) == 0)
		{
			i = 0;
			while (++i <= 9)
			{
				j = -1;
				while (++j < 9)
				{
					backtrack2(tab, i, j, nb);
				}
			}
		}
	}
	return (NULL);
}
