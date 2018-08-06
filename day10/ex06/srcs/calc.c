/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edevos <edevos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 10:38:32 by edevos            #+#    #+#             */
/*   Updated: 2018/07/26 10:53:38 by edevos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doop.h"

void	calc(char **av)
{
	int result;

	result = 0;
	if (av[2][0] == '+')
		result = ft_atoi(av[1]) + ft_atoi(av[3]);
	if (av[2][0] == '-')
		result = ft_atoi(av[1]) - ft_atoi(av[3]);
	if (av[2][0] == '%')
		result = ft_atoi(av[1]) % ft_atoi(av[3]);
	if (av[2][0] == '*')
		result = ft_atoi(av[1]) * ft_atoi(av[3]);
	if (av[2][0] == '/')
		result = ft_atoi(av[1]) / ft_atoi(av[3]);
	ft_putnbr(result);
	ft_putstr("\n");
}
