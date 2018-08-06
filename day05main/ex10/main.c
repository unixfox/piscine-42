/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edevos <edevos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 14:50:08 by edevos            #+#    #+#             */
/*   Updated: 2018/07/18 14:57:01 by edevos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char c[] = "encqvwppnsydfxcolgkxamcwtmnlqbweghptaq";
	printf("%s", ft_strcapitalize(c));
}
