/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 14:26:47 by ade-la-c          #+#    #+#             */
/*   Updated: 2020/09/16 14:49:15 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_flag				ft_parser(char *s, int i/*, va_list args*/) 
{								//i = index après % (debut de defstr) s = fornmat string
	t_flag			flags;
	int				check;

	check = 0;
	while (s && s[i] && ft_checker(s[i]) == 0 && s[i] == '-')
	{
		flags.minus = 1;
		i++;
	}
	while (s && s[i] && ft_checker(s[i]) == 0 && s[i] == '0')
	{
		flags.zero = 1;
		i++;
	}
	while (s && s[i] && ft_checker(s[i]) == 0)
	{
		if ((s[i] > '0' && s[i] <= '9') && check == 0)
		{
			flags.width = ft_atoi(&s[i]);
			check = 1;
		}
		flags.prec = (s[i] == '.' ? ft_atoi(&s[i + 1]) : 0);
		i++;
	}
	if (s && s[i] && ft_checker(s[i]) != 0)
		flags.definer = s[i];
	i++;
	return (flags);
}

int			main(void)
{
	char	*str = "oui%-12.5d";
	int		i = 3;
	t_flag	flags = ft_parser(str, i + 1);

	printf("- : %d\n0 : %d\nw : %d\np : %d\nc : %c|\n", flags.minus, flags.zero, flags.width, flags.prec, flags.definer);
	return (0);
}
