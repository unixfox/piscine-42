/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edevos <edevos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 16:55:55 by edevos            #+#    #+#             */
/*   Updated: 2018/07/11 19:41:24 by edevos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int result;
	int i;

	result = 1;
	i = 1;
	if (nb >= 0 && nb <= 12)
	{
		while (++i <= nb)
			result *= i;
		return (result);
	}
	return (0);
}
