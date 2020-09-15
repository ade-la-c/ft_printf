/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 14:26:47 by ade-la-c          #+#    #+#             */
/*   Updated: 2020/09/15 22:15:15 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_flag				*ft_parser(char *s, int i, va_list args) 
{								//i = index après % (debut de defstr) s = fornmat string
	t_flag			flags;
	int				check;
	char			str;

	while (s[i] && ft_checker(s[i]) == 0)
	{
		flags.minus = (s[i] = '-' ? 1 : 0);
		flags.zero = (s[i] = '0' ? 1 : 0);
		if ((s[i] > '0' && s[i] <= '9') && check == 0)
		{
			flags.width = ft_atoi(&s[i]);
			check = 1;
		}	
		flags.prec = (s[i] = '.' ? ft_atoi(&s[i + 1]) : 0);
		i++;
	}
	while (s[i] && ft_checker(s[i]) != 0)
		i++;
	flags.definer = s[i];
	return (flags);
}
/*
int			main(void)
{
	return (0);
}
*/