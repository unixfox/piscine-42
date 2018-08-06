/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edevos <edevos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 16:41:35 by edevos            #+#    #+#             */
/*   Updated: 2018/07/26 16:16:37 by edevos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int error_order;
	int invalid;

	i = 0;
	invalid = 0;
	if (length < 2)
		return (1);
	while (++i < length)
	{
		if (i > 0 && (*f)(tab[i - 1], tab[i]) > 0)
			error_order = 1;
	}
	if (error_order == 1)
		invalid++;
	error_order = 0;
	while (--i >= 0)
	{
		if (i > 0 && (*f)(tab[i - 1], tab[i]) < 0)
			error_order = 1;
	}
	if (error_order == 1)
		invalid++;
	return ((invalid == 2) ? 0 : 1);
}
