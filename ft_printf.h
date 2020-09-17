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
t_flag					ft_parser(char *s, int i, va_list args);
int						ft_atoimod(char *str, va_list args);
char					*ft_pickdefstr(int i, char *s);
int						main(void);

#endif
