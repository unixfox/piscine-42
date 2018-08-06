/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printxx.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edevos <edevos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 12:21:18 by pscott            #+#    #+#             */
/*   Updated: 2018/07/22 15:16:55 by edevos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "extras.h"

int		print00(char *str, int x, int y)
{
	if (!ft_strcmp(rush00(x, y), str))
	{
		write(1, "[colle-00] [", 12);
		ft_putnbr(x);
		write(1, "] [", 3);
		ft_putnbr(y);
		write(1, "]", 1);
		return (1);
	}
	return (0);
}

int		print01(char *str, int x, int y)
{
	if (!ft_strcmp(rush01(x, y), str))
	{
		write(1, "[colle-01] [", 12);
		ft_putnbr(x);
		write(1, "] [", 3);
		ft_putnbr(y);
		write(1, "]", 1);
		return (1);
	}
	return (0);
}

int		print02(char *str, int x, int y)
{
	if (!ft_strcmp(rush02(x, y), str))
	{
		write(1, "[colle-02] [", 12);
		ft_putnbr(x);
		write(1, "] [", 3);
		ft_putnbr(y);
		write(1, "]", 1);
		return (1);
	}
	return (0);
}

int		print03(char *str, int x, int y)
{
	if (!ft_strcmp(rush03(x, y), str))
	{
		write(1, "[colle-03] [", 12);
		ft_putnbr(x);
		write(1, "] [", 3);
		ft_putnbr(y);
		write(1, "]", 1);
		return (1);
	}
	return (0);
}

int		print04(char *str, int x, int y)
{
	if (!ft_strcmp(rush04(x, y), str))
	{
		write(1, "[colle-04] [", 12);
		ft_putnbr(x);
		write(1, "] [", 3);
		ft_putnbr(y);
		write(1, "]", 1);
		return (1);
	}
	return (0);
}
