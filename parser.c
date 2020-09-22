/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 14:26:47 by ade-la-c          #+#    #+#             */
/*   Updated: 2020/09/22 21:08:47 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int			ft_atoimod(char *str, va_list args, int x, t_flag f)
{
	int				ret;

	if (str[0] == '*')
	{
		ret = va_arg(args, int);
		if (ret < 0 && x == 1)
		{
			f.minus = 1;
			return (ret *= -1);
		}
		else if (ret < 0 && x == 2)
			return (ret);
	}
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

t_flag				ft_parser(char *s, t_iteration *i, va_list args)
{
	t_flag			flags;
	int				check;

	check = 0;
	initflags(&flags);
	i->i++;
	while (s[i->i] && ft_checker(s[i->i]) == 0 && s[i->i] == '-' && i->i++)
		flags.minus = 1;
	while (s[i->i] && ft_checker(s[i->i]) == 0 && s[i->i] == '0' && i->i++)
		flags.zero = 1;
	while (s[i->i] && ft_checker(s[i->i]) == 0)
	{
		if ((s[i->i] == '*' || (s[i->i] > '0' && s[i->i] <= '9')) && check == 0)
		{
			flags.width = ft_atoimod(&s[i->i], args, 1, flags);
			check = 1;
		}
		if (s[i->i] && s[i->i] == '.')
			flags.prec = ft_atoimod(&s[i->i + 1], args, 2, flags);
		i->i++;
	}
	if (s[i->i] && ft_checker(s[i->i]) != 0)
		flags.definer = s[i->i];
printf("- : %d\n0 : %d\nw : %d\np : %d\nc : %c|\n",
flags.minus, flags.zero, flags.width, flags.prec, flags.definer);
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
**	-gerer flags le cas (zero & minus) directement dans le parser
*/