/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edevos <edevos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 15:23:43 by pscott            #+#    #+#             */
/*   Updated: 2018/07/22 15:20:00 by edevos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "extras.h"

int		error(void)
{
	write(1, "aucune\n", 7);
	return (0);
}