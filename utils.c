/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 14:26:47 by ade-la-c          #+#    #+#             */
/*   Updated: 2020/09/15 20:09:03 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char				*ft_parser(char *s, int i, va_list args) 
{			//i = index après % (debut de defstr) s = fornmat string
	t_flag			flags;
	int				temp;
	char			str;

	while (s[i] && ft_checker(s[i]) == 0)
	{
		flags.minus = (s[i] = '-' ? 1 : 0);
		flags.zero = (s[i] = '0' ? 1 : 0);
	}
	flags.width = ((s[i] > '0' && s[i] <= '9') ? ft_atoi(&s[i]) : 0);
	return (0);
}
/*
int			main(void)
{
	char	*str = "~~~%0005d~~~~~~";
	printf("%s\n", ft_pickdefstr(3, str));
	return (0);
}
*/