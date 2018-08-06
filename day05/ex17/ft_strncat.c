/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edevos <edevos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 09:43:26 by edevos            #+#    #+#             */
/*   Updated: 2018/07/18 15:18:35 by edevos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	unsigned int	i;
	int				j;

	i = 0;
	while (dest[i] != '\0')
		++i;
	j = 0;
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		++j;
	}
	dest[i] = '\0';
	return (dest);
}
