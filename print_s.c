/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 18:53:47 by ade-la-c          #+#    #+#             */
/*   Updated: 2020/10/05 20:06:04 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void				ft_print_s(t_flag flags, va_list args)
{
	char			*str;
	int				i;
	int				prt;

	str = va_arg(args, char*);
	str = (str == NULL ? "(null)" : str);
	i = 0;//printf("&%d&", flags.prec);
	prt = ((int)ft_strlen(str) <= flags.prec || flags.prec <= -1 ?
	(int)ft_strlen(str) : flags.prec);//printf("+%d+\n", prt);
	if (flags.minus == 1)
		while (str[i] && prt && prt--)
			ft_putchar(str[i++]);
	prt = ((int)ft_strlen(str) <= flags.prec || flags.prec == -1 ?
	(int)ft_strlen(str) : flags.prec);
	while (flags.width && flags.width > prt && flags.width - prt
	&& flags.width--)
		ft_putchar(' ');
	if (flags.minus == 0)
		while (str[i] && prt && prt--)
			ft_putchar(str[i++]);
	return ;
}
