/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 19:34:30 by ade-la-c          #+#    #+#             */
/*   Updated: 2020/09/25 15:39:35 by ade-la-c         ###   ########.fr       */
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
	t_iteration			i;

	i.i = 0;
	va_start(args, str);
	while (str && str[i.i])
	{
		if (str[i.i] != '%')
			ft_putchar(str[i.i]);
		else if (str[i.i] == '%')
			ft_parser((char *)str, &i, args);
		i.i++;
	}
	printf("%d\n", i.i);
	return (i.i);
}

int		main(void)
{
	ft_printf("1234567\n%05.*deh oh\n%-0*s\n", -55, 8, "eee");
	return (0);
}
