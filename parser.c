/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 14:26:47 by ade-la-c          #+#    #+#             */
/*   Updated: 2020/10/22 16:20:11 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int			ft_atoimod(char *str, va_list args, int x, t_flag *f)
{
	int				ret;

	if (str[0] == '*')
	{
		ret = va_arg(args, int);
		if (x == 1)
		{
			if (ret <= 0)
				f->minus = 1;
			return ((ret >= 0) ? ret : -ret);
		}
		else if (x == 2)
			return (ret);
	}
	else if (ft_isdigit(str[0]) == 1)
		return (ft_atoi(str));
	return (0);
}

static void			initflags(t_flag *flags)
{
	flags->minus = 0;
	flags->zero = 0;
	flags->width = 0;
	flags->prec = -1;
	flags->definer = 0;
}

t_flag				ft_parser(char *s, t_iter *i, va_list args)
{
	t_flag			f;

	initflags(&f);
	i->i++;
	while (s[i->i] && ft_checker(s[i->i]) == 0 && s[i->i] == '-' && i->i++)
		f.minus = 1;
	while (s[i->i] && ft_checker(s[i->i]) == 0 && s[i->i] == '0' && i->i++)
		f.zero = 1;
	while (s[i->i] && ft_checker(s[i->i]) == 0)
	{
		if (((s[i->i] == '*' && s[i->i - 1] != '.') ||
		(s[i->i] > '0' && s[i->i] <= '9')) && f.width == 0 && f.prec == -1)
			f.width = ft_atoimod(&s[i->i], args, 1, &f);
		if (s[i->i] && s[i->i] == '.')
			f.prec = ft_atoimod(&s[i->i + 1], args, 2, &f);
		i->i++;
	}
	f.zero = (f.minus ? 0 : f.zero);
	if (s[i->i] && ft_checker(s[i->i]) != 0)
		f.definer = s[i->i];
	return (f);
}
