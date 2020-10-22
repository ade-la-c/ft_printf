/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 15:15:36 by ade-la-c          #+#    #+#             */
/*   Updated: 2020/10/22 17:27:29 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void					ft_print_p(t_flag f, t_iter *i, va_list args)
{
	unsigned long		ptr;
	int					check;

	ptr = va_arg(args, unsigned long);
	check = (!ptr && f.prec == 0 ? 1 : 0);
	if (f.minus == 1)
	{
		ft_putstrpf("0x", i);
		if (!check)
			ft_putnbrbase(ptr, ft_hexlen(ptr), f, i);
	}
	while (f.width && f.width - (ft_hexlen(ptr) + 2 - check) > 0 && f.width--)
		ft_putcharpf(' ', i);
	if (f.minus == 0)
	{
		ft_putstrpf("0x", i);
		if (!check)
			ft_putnbrbase(ptr, ft_hexlen(ptr), f, i);
	}
	return ;
}
