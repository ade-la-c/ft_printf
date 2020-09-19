/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 14:26:47 by ade-la-c          #+#    #+#             */
/*   Updated: 2020/09/19 17:49:05 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int			ft_atoimod(char *str, va_list args, int x, t_flag f)
{
	int				ret;

	ret = va_arg(args, int);
	if (str[0] == '*')
	{
		if (ret < 0)
			ret * -1;
		(x == 1 ? f.minus = -1 : f.prec = 0);
	}
//		(ret >= 0 ? ret : ret * -1);
	else if (ft_isdigit(str[0]) == 1)
		return (ft_atoi(str));
	return (-1);
}

static void			initflags(t_flag *flags)
{
	flags->minus = 0;
	flags->zero = 0;
	flags->width = 0;
	flags->prec = -1;
	flags->definer = 0;
}

t_flag				ft_parser(char *s, int i, va_list args)
{
	t_flag			flags;
	int				check;

	check = 0;
	initflags(&flags);
	while (s && s[i] && ft_checker(s[i]) == 0 && s[i] == '-' && i++)
		flags.minus = 1;
	while (s && s[i] && ft_checker(s[i]) == 0 && s[i] == '0' && i++)
		flags.zero = 1;
	while (s && s[i] && ft_checker(s[i]) == 0 && i++)
	{
		if (((s[i] > '0' && s[i] <= '9') || s[i] == '*') && check == 0)
		{
			flags.width = ft_atoimod(&s[i], args, 1, flags);
			check = 1;
		}
		if (s && s[i] && s[i] == '.')
			flags.prec = ft_atoimod(&s[i + 1], args, 2, flags);
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
**	-gerer width negative (dans le cas '*' (activer flag minus + valeur abslue de width dans atoimod))
**	-initialiser structure(s)(precision = -1)
**	-gerer flags le cas (zero & minus) directement dans le parseur
*/