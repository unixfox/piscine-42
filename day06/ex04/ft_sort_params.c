/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edevos <edevos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 17:28:15 by edevos            #+#    #+#             */
/*   Updated: 2018/07/17 11:41:11 by edevos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		ft_strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' || *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int		main(int argc, char **argv)
{
	int i;
	int j;
	int k;
	int tab[argc - 1];

	i = 0;
	j = (argc - 1);
	k = 0;
	while (++i < argc)
	{
		while (++k < argc)
			if (ft_strcmp(argv[i], argv[k]) < 0 && argv[i] != argv[k])
				j--;
		tab[j] = i;
		k = 0;
		j = (argc - 1);
	}
	i = 0;
	while (++i <= (argc - 1))
	{
		ft_putstr(argv[tab[i]]);
		ft_putstr("\n");
	}
	return (0);
}
