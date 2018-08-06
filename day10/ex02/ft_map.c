/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edevos <edevos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 16:28:00 by edevos            #+#    #+#             */
/*   Updated: 2018/07/26 16:28:00 by edevos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *result;

	i = 0;
	result = malloc(length * sizeof(int));
	while (i < length)
	{
		result[i] = (*f)(tab[i]);
		i++;
	}
	return (result);
}
