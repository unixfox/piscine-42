/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edevos <edevos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 12:42:04 by edevos            #+#    #+#             */
/*   Updated: 2018/07/23 16:51:00 by edevos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*result;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	result = malloc(sizeof(result));
	while (++i < argc)
	{
		while (argv[i][j] != '\0')
		{
			result[k] = argv[i][j];
			j++;
			k++;
		}
		j = 0;
		if ((i + 1) < argc)
			result[k] = '\n';
		else
			result[k] = '\0';
		k++;
	}
	return (result);
}
