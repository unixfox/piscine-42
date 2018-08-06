/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgilbert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 19:58:48 by cgilbert          #+#    #+#             */
/*   Updated: 2018/07/21 19:59:14 by cgilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "std.h"

void	ft_print_function(int i, int x, int y)
{
	int k;

	k = 0;
	while (k < x)
	{
		if (i == 0 && (k == 0 || k == x - 1))
		{
			ft_putchar('A');
		}
		else if (i == y - 1 && (k == 0 || k == x - 1))
		{
			ft_putchar('C');
		}
		else
		{
			ft_putchar('B');
		}
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
		{
			ft_putchar('B');
			k++;
		}
		else
		{
			ft_putchar(' ');
			k++;
		}
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
		{
			ft_print_function(i, x, y);
		}
		else
		{
			ft_print_function2(x);
		}
		i++;
	}
}
