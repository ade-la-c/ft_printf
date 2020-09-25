/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ischar.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 20:24:00 by ade-la-c          #+#    #+#             */
/*   Updated: 2020/09/25 19:16:31 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void				ft_ischar(t_flag flags, va_list args)
{
	char			str[flags.width + 1];
	int				i;
	char			c;

	i = -1;
	c = va_arg(args, char);
	if (flags.minus == 1)
	{
		while (str[i] && i++)
			str[i] = ' ';
		str[i + 1] = c;
	}
	i = 0;
	if (flags.minus == 0)
	{
		str[i] = c;
		while (str[i])
		{
			str[i] = ' ';
			i++;
		}
	}
//	ft_putstr(str);			<--------add ft_putstr
// test ft_ischar
}
