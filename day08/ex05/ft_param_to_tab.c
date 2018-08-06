/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edevos <edevos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 18:22:23 by edevos            #+#    #+#             */
/*   Updated: 2018/07/25 14:03:26 by edevos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_par.h"

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char				*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char				*ft_strdup(char *src)
{
	char *dest;

	dest = malloc(ft_strlen(src) + 1);
	if (dest == NULL)
		return (NULL);
	ft_strcpy(dest, src);
	return (dest);
}

struct	s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	int			i;
	t_stock_par	*tab;

	i = 0;
	if ((tab = malloc((ac + 1) * sizeof(t_stock_par))) == NULL)
		return (NULL);
	while (i < ac)
	{
		tab[i].size_param = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		tab[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}
