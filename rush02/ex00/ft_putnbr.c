/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pscott <pscott@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 11:39:17 by pscott            #+#    #+#             */
/*   Updated: 2018/07/21 11:41:55 by pscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "extras.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		check_special_number(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	return (nb);
}

void	ft_putnbr(int nb)
{
	char char_num;
	char last_digit;

	nb = check_special_number(nb);
	if (nb < 0)
	{
		ft_putchar('-');
		nb = (-1 * nb);
	}
	if (nb <= 9)
	{
		char_num = nb + '0';
		ft_putchar(char_num);
	}
	else
	{
		last_digit = nb % 10;
		last_digit = last_digit + '0';
		nb = nb / 10;
		ft_putnbr(nb);
		ft_putchar(last_digit);
	}
}
