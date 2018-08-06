/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edevos <edevos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 11:19:40 by edevos            #+#    #+#             */
/*   Updated: 2018/07/11 19:45:40 by edevos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int result;
	int i;

	result = nb;
	i = 1;
	if (power == 0)
		return (1);
	if (power > 0)
	{
		while (++i <= power)
			result *= nb;
		return (result);
	}
	return (0);
}
