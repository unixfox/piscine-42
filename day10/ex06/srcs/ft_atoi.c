/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edevos <edevos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 10:36:25 by edevos            #+#    #+#             */
/*   Updated: 2018/07/26 10:38:43 by edevos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doop.h"

int	ft_atoi(char *str)
{
	int i;
	int result;
	int minus;

	i = 0;
	result = 0;
	minus = 0;
	while (str[i] == ' ' || (str[i] >= '\a' && str[i] <= '\r'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus = 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - 48);
		i++;
	}
	result = (minus == 1) ? result * -1 : result;
	return (result);
}
