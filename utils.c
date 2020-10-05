/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 16:42:07 by ade-la-c          #+#    #+#             */
/*   Updated: 2020/10/05 17:20:30 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int						ft_putint(int n)
{
	char				*str;

	if (!n)
		return (0);
	ft_putstr(str = ft_itoa(n));
	free(str);
	return ((int)ft_strlen(str));
}
