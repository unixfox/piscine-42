/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edevos <edevos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 10:29:46 by edevos            #+#    #+#             */
/*   Updated: 2018/07/23 14:04:20 by edevos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_count_words(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if ((str[i - 1] == ' ' || str[i - 1] == '	' ||
		str[i - 1] == '\n') && str[i] >= 33 && str[i] <= 126)
			j++;
		else if (i == 0 && str[i] >= 33 && str[i] <= 126)
			j++;
		i++;
	}
	return (j);
}

int		ft_count_word(char *str, int i)
{
	int j;

	j = 0;
	while (str[i] >= 33 && str[i] <= 126)
	{
		i++;
		j++;
	}
	return (j);
}

char	**ft_split_whitespaces(char *str)
{
	char	**tab;
	int		c;
	int		i;
	int		j;

	i = 0;
	c = 0;
	if ((tab = (char**)malloc(sizeof(tab) * (ft_count_words(str) + 1))) == NULL)
		return (NULL);
	while (str[c])
	{
		while ((str[c] == ' ' || str[c] == '\t' || str[c] == '\n') && str[c])
			c++;
		if (str[c])
		{
			j = 0;
			if ((tab[i] = (char*)malloc((ft_count_word(str, c)))) == NULL)
				return (NULL);
			while (str[c] != ' ' && str[c] != '\t' && str[c] != '\n' && str[c])
				tab[i][j++] = str[c++];
			tab[i++][j] = '\0';
		}
	}
	tab[i] = 0;
	return (tab);
}
