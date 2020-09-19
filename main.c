/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 19:57:38 by ade-la-c          #+#    #+#             */
/*   Updated: 2020/09/19 18:08:23 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int				main(void)
{
//	printf("|%-*d|\n", 5, 5);
//	printf("|%5.5d|\n", 5);
	printf("|%05.-5d|\n", 5);
	printf("|%5.*d|\n", -5, 5);
	printf("|%5.*d|\n", 5, 5);
	printf("|%05.d|\n", 5);				//flags.prec s'annule quand il n'est pas positif
	printf("|%05.0d|\n", 5);
	printf("|%05.*d|\n", 0, 5);
//	printf("|%*d|\n", 5, 5);
//	printf("|%-----*d|\n", -10, 9);
//	printf("|%012.5d|\n", 8);
//	printf("|%%|\n");
//	printf("|%-5.5%|\n");
//	printf("%d\n", ft_atoi("o235"));
	return (0);
}

/*
int				ft_avg(int num, ...)
{
	va_list		liste;
	int			sum;
	int			i;

	sum = 0;
	i = -1;
	va_start(liste, num);
	while (++i < num)
		sum += va_arg(liste, int);
	return (sum);
}

int				main(void)
{
	printf("%d", ft_avg());
	printf("\n");
	return (0);
}
*/
/*
int				main(void)
{
	char *s = "coucou";
	int parser;
	t_flag	flag;

	flag.width = 0;

	printf("%*s", 50, s);
	printf("\n");
	return (0);
}
*/
