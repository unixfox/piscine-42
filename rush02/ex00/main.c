/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edevos <edevos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 09:08:28 by pscott            #+#    #+#             */
/*   Updated: 2018/07/25 10:10:36 by edevos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "extras.h"

int		get_x(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\n')
		i++;
	return (i);
}

int		get_y(char *str)
{
	int i;
	int y;

	i = 0;
	y = 0;
	while (str[i])
	{
		if (str[i] == '\n')
		{
			y++;
		}
		i++;
	}
	return (y);
}

void	ext1(char *str, int x, int y, int i)
{
	if (i != 0)
		print_answer(str, x, y, &i);
	else
		write(1, "aucune", 6);
	ft_putchar('\n');
}

int		main(void)
{
	int		x;
	char	buf;
	int		y;
	char	*str;
	int		i;

	i = 0;
	y = 0;
	if ((str = (char*)malloc(sizeof(char*) * (65537))) == NULL)
		return (0);
	while ((x = (read(0, &buf, 1))))
	{
		if (x > 0 && y == 0)
			y = 1;
		str[i++] = buf;
	}
	if (y == 0)
		return (error());
	x = get_x(str);
	y = get_y(str);
	i = how_many(str, x, y);
	ext1(str, x, y, i);
	return (0);
}
