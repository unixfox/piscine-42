/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgilbert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 19:55:58 by cgilbert          #+#    #+#             */
/*   Updated: 2018/07/21 19:56:01 by cgilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "extras.h"

char	*ft_print_function00(int x, char *res)
{
	int k;

	k = 0;
	while (k < x)
	{
		if (k == 0 || k == x - 1)
			ft_strcat(res, 'o');
		else
			ft_strcat(res, '-');
		k++;
	}
	ft_strcat(res, '\n');
	return (res);
}

char	*ft_print_function002(int x, char *res)
{
	int k;

	k = 0;
	while (k < x)
	{
		if (k == 0 || k == x - 1)
			ft_strcat(res, '|');
		else
			ft_strcat(res, ' ');
		k++;
	}
	ft_strcat(res, '\n');
	return (res);
}

char	*rush00(int x, int y)
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
			ft_print_function00(x, res);
		else
			ft_print_function002(x, res);
		i++;
	}
	return (res);
}
