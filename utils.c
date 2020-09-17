/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 14:26:47 by ade-la-c          #+#    #+#             */
/*   Updated: 2020/09/17 21:25:53 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int					ft_atoimod(char *str, va_list args)
{
	if (str[0] == '*')
		return (va_arg(args, int));
	else if (ft_isdigit(str[0]) == 1)
		return (ft_atoi(str));
	return (-1);
}

t_flag				ft_parser(char *s, int i, va_list args)
{
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
		if ((s[i] > '0' && s[i] <= '9' && s[i] == '*') && check == 0)
		{
			flags.width = ft_atoimod(&s[i], args);
			check = 1;
		}
		if (s && s[i] && s[i] == '.')
			flags.prec = ft_atoimod(&s[i + 1], args);
		i++;
	}
	if (s && s[i] && ft_checker(s[i]) != 0)
		flags.definer = s[i++];
printf("- : %d\n0 : %d\nw : %d\np : %d\nc : %c|\n",
flags.minus, flags.zero, flags.width, flags.prec, flags.definer);
printf("iteration : %d\n", i);
	return (flags);
}
/*
int			main(void)
{
	char	*str = "oui%-016702.5d";
	int		i = 3;
	t_flag	flags = ft_parser(str, i, );

	printf("- : %d\n0 : %d\nw : %d\np : %d\nc : %c|\n",
	flags.minus, flags.zero, flags.width, flags.prec, flags.definer);
	return (0);
}
*/

/*
	-gerer width negative (dans le cas '*' (activer flag minus + valeur abslue de width dans atoimod))
	-initialiser structure(s)(precision = -1)
	-gerer flags le cas (zero & minus) directement dans le parseur
*/