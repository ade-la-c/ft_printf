/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_c.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 20:24:00 by ade-la-c          #+#    #+#             */
/*   Updated: 2020/10/19 17:16:26 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void				ft_print_c(t_flag f, t_iter *i, va_list args)
{
	char			c;

	c = (f.definer == '%' ? '%' : (char)va_arg(args, int));
	if (f.minus == 1)
		ft_putcharpf(c, i);
	while (f.width - 1 && f.width--)
		ft_putcharpf((c == '%' && f.zero ? '0' : ' '), i);
	if (f.minus == 0)
		ft_putcharpf(c, i);
	return ;
}
