/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 15:15:36 by ade-la-c          #+#    #+#             */
/*   Updated: 2020/10/14 18:16:52 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void					ft_print_p(t_flag f, va_list args)
{
	unsigned long		ptr;

	ptr = (unsigned long)va_arg(args, void*);
	if (f.minus == 1)
	{
		ft_putstr("0x");
		ft_putnbrbase(ptr, "0123456789abcdef", ft_hexlen(ptr), f);
	}
	while (f.width && f.width - (ft_hexlen(ptr) + 2) > 0 && f.width--)
		ft_putchar(' ');
	if (f.minus == 0)
	{
		ft_putstr("0x");
		ft_putnbrbase(ptr, "0123456789abcdef", ft_hexlen(ptr), f);
	}
	return ;
}
