/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgilbert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 19:57:23 by cgilbert          #+#    #+#             */
/*   Updated: 2018/07/21 19:57:25 by cgilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "extras.h"

char	*ft_print_function03(int x, char *res)
{
	int k;

	k = 0;
	while (k < x)
	{
		if (k == 0)
			ft_strcat(res, 'A');
		else if (k == x - 1)
			ft_strcat(res, 'C');
		else
			ft_strcat(res, 'B');
		k++;
	}
	ft_strcat(res, '\n');
	return (res);
}

char	*ft_print_function032(int x, char *res)
{
	int k;

	k = 0;
	while (k < x)
	{
		if (k == 0 || k == x - 1)
			ft_strcat(res, 'B');
		else
			ft_strcat(res, ' ');
		k++;
	}
	ft_strcat(res, '\n');
	return (res);
}

char	*rush03(int x, int y)
{
	int		i;
	char	*res;

	i = 0;
	if ((res = (char*)malloc(sizeof(char*) * (x * y + 1))) == NULL)
		return (NULL);
	if (x < 1 || y < 1)
		return (NULL);
	while (i < y)
	{
		if (i == 0 || i == y - 1)
			ft_print_function03(x, res);
		else
			ft_print_function032(x, res);
		i++;
	}
	return (res);
}
