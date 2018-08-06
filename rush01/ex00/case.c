/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edevos <edevos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 14:43:05 by alhenry           #+#    #+#             */
/*   Updated: 2018/07/15 20:53:20 by edevos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	verif_ligne(char **tab, char nb);
void	verif_collone(char **tab, char nb);
void	methodique(char **tab, char nb);
void	verif_case(char **tab, char nb);
char	**backtrack(char **tab);
int		main(int argc, char **argv);

void	case_individuel(char **tab, int x, int y, char nb)
{
	int i;
	int j;
	int nb_bool;

	i = 0;
	nb_bool = 0;
	while (i < 3)
	{
		j = 0;
		while (j < 3)
			nb_bool = (tab[x + i][y + j++] == nb) ? 1 : nb_bool;
		i++;
	}
	if (nb_bool == 1)
	{
		i = 0;
		while (i < 3)
		{
			j = -1;
			while (j++ < 3)
				tab[x + i][y + j] =
				(tab[x + i][y + j] == '.') ? 'X' : tab[x + i][y + j];
			i++;
		}
	}
}

void	vide(char **tab)
{
	int i;
	int j;

	i = 1;
	while (i <= 9)
	{
		j = 0;
		while (j < 9)
		{
			tab[i][j] = (tab[i][j] == 'X') ? '.' : tab[i][j];
			j++;
		}
		i++;
	}
}

int		placer_nb(char **tab)
{
	int i;
	int j;

	i = 1;
	while (i <= 9)
	{
		j = 0;
		while (j < 9)
		{
			if (tab[i][j++] == 'X')
				return (0);
		}
		i++;
	}
	return (1);
}
