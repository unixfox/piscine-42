/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edevos <edevos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 14:40:45 by alhenry           #+#    #+#             */
/*   Updated: 2018/07/15 21:52:28 by edevos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	case_individuel(char **tab, int x, int y, char nb);

void	verif_ligne(char **tab, char nb)
{
	int i;
	int j;
	int nb_bool;

	nb_bool = 0;
	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
			nb_bool = (tab[i][j++] == nb) ? 1 : nb_bool;
		if (nb_bool == 1)
		{
			j = 0;
			while (j < 9)
			{
				tab[i][j] = (tab[i][j] == '.') ? 'X' : tab[i][j];
				j++;
			}
		}
		i++;
		nb_bool = 0;
	}
}

void	verif_collone(char **tab, char nb)
{
	int i;
	int j;
	int nb_bool;

	nb_bool = 0;
	j = 0;
	while (j < 9)
	{
		i = 0;
		while (i < 9)
			nb_bool = (tab[i++][j] == nb) ? 1 : nb_bool;
		if (nb_bool == 1)
		{
			i = 0;
			while (i < 9)
			{
				tab[i][j] = (tab[i][j] == '.') ? 'X' : tab[i][j];
				i++;
			}
		}
		j++;
		nb_bool = 0;
	}
}

void	verif_case(char **tab, char nb)
{
	int i;
	int j;

	i = 1;
	while (i <= 9)
	{
		j = 0;
		while (j < 9)
		{
			case_individuel(tab, i, j, nb);
			j += 3;
		}
		i += 3;
	}
}
