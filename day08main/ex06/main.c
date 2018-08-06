/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edevos <edevos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 14:40:37 by edevos            #+#    #+#             */
/*   Updated: 2018/07/24 14:45:40 by edevos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

struct	s_stock_par*ft_param_to_tab(int ac, char **av);

void	ft_show_tab(struct s_stock_par *par);

int main(int ac, char **av)
{
	ft_show_tab(ft_param_to_tab(ac, av));
}