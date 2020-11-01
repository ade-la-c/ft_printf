/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_x.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 15:03:21 by ade-la-c          #+#    #+#             */
/*   Updated: 2020/11/01 16:48:29 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void					printhex(t_flag f, unsigned long num, t_iter *i)
{
	if (!f.prec && !num)
		return ;
	while (f.prec - ft_hexlen(num) > 0 && f.prec--)
		ft_putcharpf('0', i);
	ft_putnbrbase(num, ft_hexlen(num), f, i);
	return ;
}

void						ft_print_x(t_flag f, t_iter *i, va_list args)
{
	unsigned int			num;
	char					*base;
	int						prt;

	num = va_arg(args, unsigned int);
	base = (f.definer == 'X' ? "0123456789ABCDEF" : "0123456789abcdef");
	if (f.zero && f.width && f.prec <= -1)
	{
		f.prec = f.width;
		f.width = 0;
		f.zero = (f.prec ? 0 : f.zero);
	}
	prt = (f.prec <= ft_hexlen(num) ? 0 : f.prec - ft_hexlen(num));
	if (f.minus == 1)
		printhex(f, num, i);
	if (f.width && !num && !f.prec)
		ft_putcharpf(' ', i);
	while (f.width && f.width > (ft_hexlen(num) + prt) && f.width--)
		ft_putcharpf(' ', i);
	if (f.minus == 0)
		printhex(f, num, i);
	return ;
}
