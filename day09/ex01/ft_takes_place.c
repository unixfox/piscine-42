/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edevos <edevos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 10:05:37 by edevos            #+#    #+#             */
/*   Updated: 2018/07/13 16:48:38 by edevos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_print_hour(int hour)
{
	if (hour == 0 || hour == 24)
	{
		printf("12.00 A.M.");
	}
	if (hour == 12)
	{
		printf("12.00 P.M.");
	}
	if (hour >= 1 && hour <= 11)
	{
		printf("%d", hour);
		printf(".00 A.M.");
	}
	if (hour >= 13 && hour <= 23)
	{
		printf("%d", hour - 12);
		printf(".00 P.M.");
	}
}

void	ft_takes_place(int hour)
{
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	ft_print_hour(hour);
	printf(" AND ");
	if (hour == 24)
		ft_print_hour(1);
	else
		ft_print_hour(hour + 1);
	printf("\n");
}
