/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_u.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 19:00:41 by ade-la-c          #+#    #+#             */
/*   Updated: 2020/10/23 18:24:50 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int				printnbr(t_flag f, long num, int tag, t_iter *iter)
{
	unsigned int		i;

	i = 0;
	if (!f.prec && num == 0)
		return (0);
	while (f.prec > ft_intlen(num, f) && f.prec-- && ++i)
		if (tag == 1)
			ft_putcharpf('0', iter);
	if (tag == 1)
		ft_putnbrpf(num, iter);
	return (i + ft_intlen(num, f));
}

void					ft_print_u(t_flag f, t_iter *i, va_list args)
{
	unsigned int		num;

	num = va_arg(args, unsigned int);
	if (f.zero && f.width && f.prec == -1)
	{
		f.prec = f.width;
		f.width = 0;
	}
	f.zero = (f.prec ? 0 : f.zero);
	if (f.minus == 1)
		printnbr(f, num, 1, i);
	while (f.width && f.width > printnbr(f, num, 2, i) && f.width--)
		ft_putcharpf(' ', i);
	if (f.minus == 0)
		printnbr(f, num, 1, i);
	return ;
}
