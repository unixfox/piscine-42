/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edevos <edevos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 16:06:09 by edevos            #+#    #+#             */
/*   Updated: 2018/07/20 10:19:39 by edevos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, const char *src, unsigned int n)
{
	char *tmp;

	tmp = dest;
	while (n > 0 && *src != '\0')
	{
		*tmp++ = *src++;
		--n;
	}
	while (n > 0)
	{
		*tmp++ = '\0';
		--n;
	}
	return (dest);
}
