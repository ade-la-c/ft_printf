/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 16:42:07 by ade-la-c          #+#    #+#             */
/*   Updated: 2020/10/08 16:27:55 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int						ft_intlen(int n)
{
	char				*str;
	int					lgt;

	if (!n)
		return (1);
	str = ft_itoa(n);
	lgt = (int)ft_strlen(str);
	free(str);
	return (lgt);
}
