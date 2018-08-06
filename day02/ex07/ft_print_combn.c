/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edevos <edevos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 17:15:17 by edevos            #+#    #+#             */
/*   Updated: 2018/07/05 17:20:37 by edevos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(char f, char s, char t)
{
	if (f == '7' && s == '8' && t == '9')
	{
		ft_putchar(f);
		ft_putchar(s);
		ft_putchar(t);
	}
	else
	{
		ft_putchar(f);
		ft_putchar(s);
		ft_putchar(t);
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	t_print_combn(int nb)
{
	char first_digit;
	char second_digit;
	char third_digit;

	first_digit = '0' - 1;
	while (++first_digit <= '9')
	{
		second_digit = first_digit;
		while (++second_digit <= '9')
		{
			third_digit = second_digit + 1;
			while (third_digit <= '9')
			{
				ft_print(first_digit, second_digit, third_digit);
				third_digit++;
			}
		}
	}
}
