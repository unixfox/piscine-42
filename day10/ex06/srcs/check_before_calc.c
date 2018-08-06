/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_before_calc.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edevos <edevos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 10:16:24 by edevos            #+#    #+#             */
/*   Updated: 2018/07/26 11:00:48 by edevos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doop.h"

int	check_before_calc(int ac, char **av)
{
	if (ac != 4)
		return (1);
	else if (av[2][0] != '%' && av[2][0] != '*' &&
	av[2][0] != '+' && av[2][0] != '-' && av[2][0] != '/')
	{
		ft_putstr("0\n");
		return (1);
	}
	else if (ft_strlen(av[2]) > 1)
	{
		ft_putstr("0\n");
		return (1);
	}
	else if (av[3][0] == '0' && av[2][0] == '/')
	{
		ft_putstr("Stop : division by zero\n");
		return (1);
	}
	else if (av[3][0] == '0' && av[2][0] == '%')
	{
		ft_putstr("Stop : modulo by zero\n");
		return (1);
	}
	return (0);
}
