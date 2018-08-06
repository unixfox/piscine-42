/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgilbert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 19:57:35 by cgilbert          #+#    #+#             */
/*   Updated: 2018/07/21 19:57:37 by cgilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "extras.h"

char	*ft_print_function04(int x, int i, char *res)
{
	int k;

	k = 0;
	while (k < x)
	{
		if (k == 0 && i == 0)
			ft_strcat(res, 'A');
		else if (k == x - 1 && i == 0)
			ft_strcat(res, 'C');
		else if (k == 0)
			ft_strcat(res, 'C');
		else if (k == x - 1)
			ft_strcat(res, 'A');
		else
			ft_strcat(res, 'B');
		k++;
	}
	ft_strcat(res, '\n');
	return (res);
}

char	*ft_print_function042(int x, char *res)
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

char	*rush04(int x, int y)
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
			ft_print_function04(x, i, res);
		else
			ft_print_function042(x, res);
		i++;
	}
	return (res);
}
