/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 16:42:07 by ade-la-c          #+#    #+#             */
/*   Updated: 2020/10/14 17:48:56 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int				ft_intlen(long n)
{
	char		*str;
	long		lgt;

	if (!n)
		return (1);
	str = ft_itoa(n);
	lgt = (long)ft_strlen(str);
	free(str);
	return (lgt);
}

int				ft_hexlen(unsigned long n)
{
	if (n >= 16)
		return (ft_hexlen(n / 16) + 1);
	return (1);
}

void			ft_putnbrbase(unsigned long n, char *base, int len, t_flag f)
{
	long long	div;
	long long	mod;

	if (f.prec != -1)
		while (f.prec > len)
		{
			ft_putchar('0');
			f.prec--;
		}
	if (f.prec == -1 && f.width >= ft_hexlen(n) && f.zero)
		while (f.width > len)
		{
			ft_putchar('0');
			f.width--;
		}
	mod = n % 16;
	div = n / 16;
	if (div)
		ft_putnbrbase(div, base, len, f);
	ft_putchar(base[mod]);
	return ;
}
