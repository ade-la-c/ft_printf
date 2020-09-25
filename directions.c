/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   directions.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 16:31:37 by ade-la-c          #+#    #+#             */
/*   Updated: 2020/09/25 19:07:42 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void					ft_directions(t_flag *flags, va_list args)
{
	if (ft_checker(flags->definer) == 0)
		return (-1);
	else if (ft_checker(flags->definer) == 1)
		{
			if (flags->definer == 'c')
				ft_ischar(flags, args);
		}
}
