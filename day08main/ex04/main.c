/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edevos <edevos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 15:38:38 by edevos            #+#    #+#             */
/*   Updated: 2018/07/24 20:20:58 by edevos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/Users/edevos/Documents/piscine42/day08/ex04/ft_point.h"

void	set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

int		main(void)
{
	t_point		point;

	set_point(&point);
	return (0);
}
