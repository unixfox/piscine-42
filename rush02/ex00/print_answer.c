/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_answer.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pscott <pscott@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 12:04:49 by pscott            #+#    #+#             */
/*   Updated: 2018/07/21 18:35:48 by pscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "extras.h"

void	print_answer(char *str, int x, int y, int *i)
{
	if (print00(str, x, y))
	{
		(*i)--;
		if (*i > 0)
			write(1, " || ", 4);
	}
	if (print01(str, x, y))
	{
		(*i)--;
		if (*i > 0)
			write(1, " || ", 4);
	}
	if (print02(str, x, y))
	{
		(*i)--;
		if (*i > 0)
			write(1, " || ", 4);
	}
	if (print03(str, x, y))
	{
		(*i)--;
		if (*i > 0)
			write(1, " || ", 4);
	}
	print04(str, x, y);
}
