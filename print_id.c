/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_id.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/02 16:41:33 by ade-la-c          #+#    #+#             */
/*   Updated: 2020/10/15 18:06:07 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int				printnbr(t_flag f, int num, int tag)
{
	int					i;

	i = 0;
	if (!f.prec && !num)
		return (0);
	if (num < 0 && ++i && tag == 1)
		ft_putchar('-');
	num = (num < 0 ? num *= -1 : num);
	while (f.prec > ft_intlen(num) && f.prec-- && ++i)
		if (tag == 1)
			ft_putchar('0');
	if (tag == 1)
		ft_putnbr_fd(num, 1);
	return (i + ft_intlen(num));
}

void					ft_print_id(t_flag f, va_list args)
{
	int					num;

	num = va_arg(args, int);
	if (f.zero && f.width && f.prec == -1)
	{
		f.prec = (num < 0 ? f.width - 1 : f.width);
		f.width = 0;
		f.zero = (f.prec ? 0 : f.zero);
	}
	
	if (f.minus == 1)
		printnbr(f, num, 1);
	while (f.width && f.width > printnbr(f, num, 2) && f.width--)
		ft_putchar(' ');
	if (f.minus == 0)
		printnbr(f, num, 1);
	return ;
}