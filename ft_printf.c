/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 19:34:30 by ade-la-c          #+#    #+#             */
/*   Updated: 2020/09/19 13:13:30 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int						ft_checker(char c)
{
	if (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i' || c == 'u'
	|| c == 'x' || c == 'X')
		return (1);
	else if (c == '%')
		return (2);
	return (0);
}

int						ft_printf(const char *str, ...)
{
	va_list				args;
	static int			i;

	i = 0;
	va_start(args, str);
	while (str && str[i])
	{
		if (str[i] != '%')
			ft_putchar(str[i]);
		else if (str[i] == '%'){printf("^%d^\n", i);
			ft_parser((char *)str, i, args);}
		i++;
	}
	return (i);
}

int		main(void)
{
//	char	*str = "oui%-016702.5d";
	ft_printf("1234\n%-55.45d\n", 5);
	return (0);
}
