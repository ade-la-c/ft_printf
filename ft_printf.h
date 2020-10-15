/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 17:37:15 by ade-la-c          #+#    #+#             */
/*   Updated: 2020/09/10 17:37:15 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FT_PRINTF_H_
# define _FT_PRINTF_H_

# include "libft/libft.h"

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <string.h>

typedef struct			s_iteration
{
	int					i;
}						t_iteration;

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
void					ft_process(char *str, t_iteration *i, va_list args);
t_flag					ft_parser(char *s, t_iteration *i, va_list args);
void					ft_directions(t_flag *flags, va_list args);

void					ft_print_c(t_flag f, va_list args);
void					ft_print_s(t_flag f, va_list args);
void					ft_print_id(t_flag f, va_list args);
void					ft_print_u(t_flag f, va_list args);
void					ft_print_p(t_flag f, va_list args);
void					ft_print_x(t_flag f, va_list args);

int						ft_intlen(long n);
int						ft_hexlen(unsigned long n);
void					ft_putnbrbase(unsigned long n, char *base, int len,
						t_flag f);

int						main(void);

#endif
