/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edevos <edevos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 10:19:13 by edevos            #+#    #+#             */
/*   Updated: 2018/07/15 22:09:18 by edevos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' || *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	nmatch(char *s1, char *s2)
{
	if (ft_strlen(s1) == 0)
	{
		return (0);
	}
	if (s1[0] == s2[0])
	{
		return (nmatch(s1 + 1, s2 + 1) + 1);
	}
	if (ft_strcmp("*", s2) == 0 || ft_strcmp(s2, s1) == 0)
	{
		return (1);
	}
	if (s2[0] == '*')
	{
		return ((nmatch(s1, s2 + 1) || nmatch(s1 + 1, s2)) + 1);
	}
	return (0);
}
