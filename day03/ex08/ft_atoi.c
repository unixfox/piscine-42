/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edevos <edevos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 16:26:04 by edevos            #+#    #+#             */
/*   Updated: 2018/07/11 10:49:10 by edevos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int i;
	int result;
	int minus;

	i = 0;
	result = 0;
	minus = 0;
	while (str[i] != '\0' && ((str[i] >= '0' && str[i] <= '9') ||
		(i == 0 && (str[0] == '+' || str[0] == '-'))))
	{
		if (str[i] == '-')
			minus = 1;
		if (str[i] >= '0' && str[i] <= '9')
			result = (result * 10) + (str[i] - 48);
		i++;
	}
	if (minus == 1)
		return (result * -1);
	else
		return (result);
}
