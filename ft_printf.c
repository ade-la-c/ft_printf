/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 19:34:30 by ade-la-c          #+#    #+#             */
/*   Updated: 2020/10/23 18:24:24 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int						ft_checker(char c)
{
	if (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i' || c == 'u'
	|| c == 'x' || c == 'X' || c == '%')
		return (1);
	return (0);
}

int						ft_intlen(unsigned int n, t_flag f)
{
	char				*str;
	int					lgt;

	if (!n)
		return (1);
	str = (f.definer == 'u' ? ft_utoa(n) : ft_itoa(n));
	lgt = (int)ft_strlen(str);
	free(str);
	return (lgt);
}

int						ft_hexlen(unsigned long n)
{
	if (n >= 16)
		return (ft_hexlen(n / 16) + 1);
	return (1);
}

void					ft_process(char *str, t_iter *i, va_list args)
{
	t_flag				flags;

	flags = ft_parser(str, i, args);
	ft_directions(&flags, i, args);
}

int						ft_printf(const char *str, ...)
{
	va_list				args;
	t_iter				i;

	i.i = 0;
	i.print = 0;
	va_start(args, str);
	while (str && str[i.i])
	{
		if (str[i.i] != '%')
			ft_putcharpf(str[i.i], &i);
		else if (str[i.i] == '%')
			ft_process((char *)str, &i, args);
		i.i++;
	}
	va_end(args);
	return (i.print);
}
