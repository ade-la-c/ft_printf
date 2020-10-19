/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   directions.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 16:31:37 by ade-la-c          #+#    #+#             */
/*   Updated: 2020/10/19 17:19:50 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void					ft_directions(t_flag *flags, t_iter *i, va_list args)
{
	if (ft_checker(flags->definer) == 0)
		return ;
	else if (ft_checker(flags->definer) == 1)
	{
		if (flags->definer == 'c' || flags->definer == '%')
			ft_print_c(*flags, i, args);
		if (flags->definer == 's')
			ft_print_s(*flags, i, args);
		if (flags->definer == 'i' || flags->definer == 'd')
			ft_print_id(*flags, i, args);
		if (flags->definer == 'u')
			ft_print_u(*flags, i, args);
		if (flags->definer == 'p')
			ft_print_p(*flags, i, args);
		if (flags->definer == 'x' || flags->definer == 'X')
			ft_print_x(*flags, i, args);
	}
}
