/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_c.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 20:24:00 by ade-la-c          #+#    #+#             */
/*   Updated: 2020/10/07 18:46:06 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void				ft_print_c(t_flag f, va_list args)
{
	char			c;

	c = (f.definer == '%' ? '%' : (char)va_arg(args, int));
	if (f.minus == 1)
		ft_putchar(c);
	while (f.width - 1 && f.width--)
		ft_putchar(' ');
	if (f.minus == 0)
		ft_putchar(c);
	return ;
}
