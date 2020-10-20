/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 16:42:07 by ade-la-c          #+#    #+#             */
/*   Updated: 2020/10/20 17:01:48 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void		nbr_rec(long n, t_iter *i)
{
	char m;

	if (n > 9)
	{
		m = n % 10 + '0';
		nbr_rec(n / 10, i);
	}
	else
		m = n + 48;
	i->print++;
	write(1, &m, 1);
}

void			ft_putnbrpf(long nb, t_iter *i)
{
	if (nb == -2147483648)
	{
		i->print += 10;
		write(1, "2147483648", 10);
	}
	else
	{
		if (nb < 0)
		{
			nb = -nb;
			i->print++;
			write(1, "-", 1);
		}
		nbr_rec(nb, i);
	}
}

void			ft_putcharpf(char c, t_iter *i)
{
	i->print++;
	write(1, &c, 1);
}

void			ft_putstrpf(char *s, t_iter *i)
{
	i->print += ft_strlen(s);
	write(1, s, ft_strlen(s));
}

void			ft_putnbrbase(unsigned long n, int len, t_flag f, t_iter *i)
{
	long long	div;
	long long	mod;
	char		*base;

	base = (f.definer == 'X' ? "0123456789ABCDEF" : "0123456789abcdef");
	if (f.prec != -1)
		while (f.prec > len)
		{
			ft_putcharpf('0', i);
			f.prec--;
		}
	if (f.prec == -1 && f.width >= ft_hexlen(n) && f.zero)
		while (f.width > len)
		{
			ft_putcharpf('0', i);
			f.width--;
		}
	mod = n % 16;
	div = n / 16;
	if (div)
		ft_putnbrbase(div, len, f, i);
	ft_putcharpf(base[mod], i);
	return ;
}
