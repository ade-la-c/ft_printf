/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_c.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 20:24:00 by ade-la-c          #+#    #+#             */
/*   Updated: 2020/09/29 18:42:06 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void				ft_print_c(t_flag flags, va_list args)
{
	char			c;

	c = (flags.definer == '%' ? '%' : (char)va_arg(args, int));
	if (flags.minus == 1)
		ft_putchar(c);
	while (flags.width - 1 && flags.width--)
		ft_putchar(' ');
	if (flags.minus == 0)
		ft_putchar(c);
	return ;
}
