/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edevos <edevos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 17:30:17 by edevos            #+#    #+#             */
/*   Updated: 2018/07/08 08:34:19 by edevos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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

void	ft_print_comb(void)
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
