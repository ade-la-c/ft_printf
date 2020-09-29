/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 18:53:47 by ade-la-c          #+#    #+#             */
/*   Updated: 2020/09/29 21:38:19 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void				ft_print_s(t_flag flags, va_list args)
{
	char			*str;

	str = va_arg(args, char*);
	
	printf("%s\n", str);
}


/*

la prec. crop la string
la width agit ensuite
le flag 0 fait rien
et le flag négatif agit apres la width comme d'habitude ?

*/