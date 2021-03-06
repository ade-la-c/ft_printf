/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 18:53:47 by ade-la-c          #+#    #+#             */
/*   Updated: 2020/10/19 17:08:26 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void				ft_print_s(t_flag f, t_iter *iter, va_list args)
{
	char			*str;
	int				i;
	int				prt;

	str = va_arg(args, char*);
	str = (str == NULL ? "(null)" : str);
	i = 0;
	f.prec = (f.prec <= -1 ? -1 : f.prec);
	prt = ((int)ft_strlen(str) <= f.prec || f.prec == -1 ?
	(int)ft_strlen(str) : f.prec);
	if (f.minus == 1)
		while (str[i] && prt && prt--)
			ft_putcharpf(str[i++], iter);
	prt = ((int)ft_strlen(str) <= f.prec || f.prec == -1 ?
	(int)ft_strlen(str) : f.prec);
	while (f.width && f.width > prt && f.width - prt
	&& f.width--)
		ft_putcharpf(' ', iter);
	if (f.minus == 0)
		while (str[i] && prt && prt--)
			ft_putcharpf(str[i++], iter);
	return ;
}
