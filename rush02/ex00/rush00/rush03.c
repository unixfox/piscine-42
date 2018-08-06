/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgilbert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 19:59:23 by cgilbert          #+#    #+#             */
/*   Updated: 2018/07/21 19:59:25 by cgilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "std.h"

void	ft_print_function(int x)
{
	int k;

	k = 0;
	while (k < x)
	{
		if (k == 0)
			ft_putchar('A');
		else if (k == x - 1)
			ft_putchar('C');
		else
			ft_putchar('B');
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
			ft_putchar('B');
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
			ft_print_function(x);
		else
			ft_print_function2(x);
		i++;
	}
}
