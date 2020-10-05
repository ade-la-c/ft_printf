/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_id.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/02 16:41:33 by ade-la-c          #+#    #+#             */
/*   Updated: 2020/10/05 17:27:24 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void					ft_print_id(t_flag flags, va_list args)
{
	int					num;

	num = va_arg(args, int);
	if (flags.prec > ft_putint(num))
		
	return ;
}



/*
la prec. add des 0 avant le nombre
(0 + width) est equivalent a la precision, a tester d'avantage
le flag width agit ensuite
et le flag négatif agit apres la width comme d'habitude ?
*/
