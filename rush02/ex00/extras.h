/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extras.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pscott <pscott@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 10:07:59 by pscott            #+#    #+#             */
/*   Updated: 2018/07/21 18:02:00 by pscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXTRAS_H
# define EXTRAS_H
# include <stdlib.h>
# include <unistd.h>

void	ft_putchar(char c);
void	ft_putnbr(int x);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strcat(char *dest, char str);
int		error(void);
char	*rush00(int x, int y);
char	*rush01(int x, int y);
char	*rush02(int x, int y);
char	*rush03(int x, int y);
char	*rush04(int x, int y);
int		how_many(char *str, int x, int y);
int		print00(char *str, int x, int y);
int		print01(char *str, int x, int y);
int		print02(char *str, int x, int y);
int		print03(char *str, int x, int y);
int		print04(char *str, int x, int y);
void	print_answer(char *str, int x, int y, int *i);
#endif
