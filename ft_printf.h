/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 17:37:15 by ade-la-c          #+#    #+#             */
/*   Updated: 2020/10/23 18:24:31 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <string.h>

typedef struct			s_iter
{
	int					i;
	int					print;
}						t_iter;

typedef struct			s_flag
{
	int					minus;
	int					zero;
	int					width;
	int					prec;
	char				definer;
}						t_flag;

int						ft_printf(const char *str, ...);
int						ft_checker(char c);
void					ft_process(char *str, t_iter *i, va_list args);
t_flag					ft_parser(char *s, t_iter *i, va_list args);
void					ft_directions(t_flag *flags, t_iter *i, va_list args);

void					ft_print_c(t_flag f, t_iter *i, va_list args);
void					ft_print_s(t_flag f, t_iter *i, va_list args);
void					ft_print_id(t_flag f, t_iter *i, va_list args);
void					ft_print_u(t_flag f, t_iter *i, va_list args);
void					ft_print_p(t_flag f, t_iter *i, va_list args);
void					ft_print_x(t_flag f, t_iter *i, va_list args);

int						ft_intlen(unsigned int n, t_flag f);
int						ft_hexlen(unsigned long n);
void					ft_putcharpf(char c, t_iter *i);
void					ft_putstrpf(char *s, t_iter *i);
void					ft_putnbrpf(long nb, t_iter *i);
void					ft_putnbrbase(unsigned long n, int len, t_flag f,
						t_iter *i);

int						main(void);

#endif
