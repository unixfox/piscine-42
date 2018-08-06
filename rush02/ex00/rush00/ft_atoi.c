/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgilbert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 19:56:27 by cgilbert          #+#    #+#             */
/*   Updated: 2018/07/21 19:56:30 by cgilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		checkforspace(char c)
{
	if (c == '\n' || c == '\t' || c == '\r' || c == ' ' ||
			c == '\v' || c == '\f')
	{
		return (1);
	}
	return (0);
}

int		normalint(char *str, int finalnb)
{
	int digit;
	int a;

	digit = 0;
	a = 0;
	while (str[a] >= '0' && str[a] <= '9')
	{
		digit = str[a] - 48;
		finalnb = finalnb * 10 + digit;
		a++;
	}
	return (finalnb);
}

int		ft_atoi(char *str)
{
	int finalnb;
	int a;
	int modif;

	a = 0;
	finalnb = 0;
	modif = 1;
	while (checkforspace(str[a]))
	{
		a++;
	}
	if (str[a] == '-' && (str[a + 1] >= '0' && str[a + 1] <= '9'))
	{
		modif = -1;
		a++;
	}
	if (str[a] == '+' && (str[a + 1] >= '0' && str[a + 1] <= '9'))
	{
		a++;
	}
	finalnb = normalint(&str[a], finalnb);
	return (finalnb * modif);
}
