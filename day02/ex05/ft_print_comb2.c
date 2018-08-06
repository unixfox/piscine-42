/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edevos <edevos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 13:25:52 by edevos            #+#    #+#             */
/*   Updated: 2018/07/08 11:41:51 by edevos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_digit(char fi, char se, char th, char fo)
{
	char check_f;
	char check_s;

	check_f = fi + se;
	check_s = th + fo;
	if (check_s != check_f)
	{
		ft_putchar(fi);
		ft_putchar(se);
		ft_putchar(' ');
		ft_putchar(th);
		ft_putchar(fo);
		if (!(fi == '9' && se == '8' && th == '9' && fo == '9'))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_comb2(void)
{
	char a;
	char b;
	char c;
	char d;

	a = '0' - 1;
	b = '0' - 1;
	c = '0' - 1;
	d = '0' - 1;
	while (++a <= '9')
	{
		while (++b <= '8')
		{
			while (++c <= '9')
			{
				while (++d <= '9')
				{
					ft_print_digit(a, b, c, d);
				}
				d = '0' - 1;
			}
			c = '0' - 1;
		}
		b = '0' - 1;
	}
}
