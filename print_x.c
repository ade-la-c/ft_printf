/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_x.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 15:03:21 by ade-la-c          #+#    #+#             */
/*   Updated: 2020/10/16 15:55:50 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void					printhex(t_flag f, unsigned long num, char *base)
{
	if (!f.prec && !num)
		return ;
	while (f.prec - ft_hexlen(num) > 0 && f.prec--)
		ft_putchar('0');
	ft_putnbrbase(num, base, ft_hexlen(num), f);
	return ;
}

void						ft_print_x(t_flag f, va_list args)
{
	unsigned long			num;
	char					*base;
	int						prt;

	num = va_arg(args, unsigned long);
	base = (f.definer == 'X' ? "0123456789ABCDEF" : "0123456789abcdef");
	if (f.zero && f.width && f.prec == -1)
	{
		f.prec = f.width;
		f.width = 0;
		f.zero = (f.prec ? 0 : f.zero);
	}
	prt = (f.prec <= ft_hexlen(num) ? 0 : f.prec - ft_hexlen(num));
	if (f.minus == 1)
		printhex(f, num, base);
	if (f.width && !num && !f.prec)
		ft_putchar(' ');
	while (f.width && f.width > (ft_hexlen(num) + prt) && f.width--)
		ft_putchar(' ');
	if (f.minus == 0)
		printhex(f, num, base);
	return ;
}

/*
**	%x a été fix, mais hardcodé ligne 42 43
**	introduire %p dans %x une fois %x fix (optionnel)
**	%u reste toujours a fix
*/
