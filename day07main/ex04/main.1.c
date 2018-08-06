/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edevos <edevos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 16:21:48 by edevos            #+#    #+#             */
/*   Updated: 2018/07/18 20:43:46 by edevos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	**ft_split_whitespaces(char *str);

int		main(void)
{
	ft_split_whitespaces("salut comment	ca va");
	return (0);
}
