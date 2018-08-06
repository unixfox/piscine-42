/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgilbert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 19:58:32 by cgilbert          #+#    #+#             */
/*   Updated: 2018/07/21 19:58:33 by cgilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "std.h"

void	ft_print_function(int x, int i)
{
	int k;

	k = 0;
	while (k < x)
	{
		if (k == 0 && i == 0)
			ft_putchar('/');
		else if (k == x - 1 && i == 0)
			ft_putchar('\\');
		else if (k == 0)
			ft_putchar('\\');
		else if (k == x - 1)
			ft_putchar('/');
		else
			ft_putchar('*');
		k++;
	}
	ft_putchar('\n');
}

void	ft_print_function2(int x)
{
	int k;

	k = 0;
	while (k < x)
	{
		if (k == 0 || k == x - 1)
			ft_putchar('*');
		else
			ft_putchar(' ');
		k++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int i;

	i = 0;
	if (x < 1 || y < 1)
		return ;
	while (i < y)
	{
		if (i == 0 || i == y - 1)
			ft_print_function(x, i);
		else
			ft_print_function2(x);
		i++;
	}
}
