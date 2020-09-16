/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 19:16:35 by ade-la-c          #+#    #+#             */
/*   Updated: 2020/09/10 19:16:35 by ade-la-c         ###   ########.fr       */
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
//	else if (!c)
//		return (-1);
	return (0);
}
/*
int						ft_printf(const char *str, ...)
{
	va_list				args;
	static int			i;			

	i = 0;
	while (str && str[i])
	{
		if (str[i] == '%')
			ft_parser(str, i + 1, args);
		else
			ft_putchar(i);
		i++;
	}
	return (i);
}
*/
/*
int		main(void)
{
	printf("~%d~\n", ft_printf("ello%05d"));
	return (0);
}
*/