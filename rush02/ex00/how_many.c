/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   how_many.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pscott <pscott@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 11:47:33 by pscott            #+#    #+#             */
/*   Updated: 2018/07/21 16:09:45 by pscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "extras.h"

int		how_many(char *str, int x, int y)
{
	int i;

	i = 0;
	if (!ft_strcmp(rush00(x, y), str))
		i++;
	if (!ft_strcmp(rush01(x, y), str))
		i++;
	if (!ft_strcmp(rush02(x, y), str))
		i++;
	if (!ft_strcmp(rush03(x, y), str))
		i++;
	if (!ft_strcmp(rush04(x, y), str))
		i++;
	return (i);
}
