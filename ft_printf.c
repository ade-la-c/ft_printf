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

int				ft_checker(char c)
{
	return (0);
}

void			ft_pick_format(char c)
{
	if (c == 'c')
		ft_ischar(c);
}

int				ft_printf(const char *str, ...)
{
	va_list		args;
	int			i;
	int			

	i = 0;
	while (str)
	{
		if (str[i] == '%')
		{
			if (ft_checker(str[i +1] == 1))
				ft_pick_format(str[i + 1])
		}
		else
			ft_putchar(i);
		i++;
	}

	return (0);
}
