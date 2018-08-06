/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edevos <edevos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 10:03:16 by edevos            #+#    #+#             */
/*   Updated: 2018/07/26 11:23:58 by edevos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOOP_H
# define DOOP_H
# include <unistd.h>

void	ft_putstr(char *str);
void	ft_putchar(char c);
int		check_before_calc(int ac, char **av);
int		ft_atoi(char *str);
void	ft_putnbr(int nb);
void	calc(char **av);
int		ft_strlen(char *str);

#endif
