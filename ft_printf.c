/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 19:16:35 by ade-la-c          #+#    #+#             */
/*   Updated: 2020/09/10 19:16:35 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int						ft_checker(char c)
{
	if (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i' || c == 'u'
	|| c == 'x' || c == 'X' || c == '%')
		return (1);
	else if (!c)
		return (-1);
	return (0);
}
/*
void					ft_pick_format(char c)
{
	if (c == 'c')
		ft_ischar(c);
}
*/
char					*ft_pickdefstr(int i, char *s)
{
	int					len;
	char				*str;
//	int					start;

	len = 0;
	while (ft_checker(s[i + len]) != 1)
		len++;
	return(ft_strncpy(str, &s[i], (size_t)len)); //ceci est la identifier string, du % au argument type
}

int main()
{
	printf("%s\n", ft_pickdefstr())  //tester si la sous string est correcte
	return (0);
}

/*
int						ft_printf(const char *str, ...)
{
	va_list				args;
	static int			i;			

	i = 0;
	while (str)
	{
		if (str[i] == '%')
			ft_pickdefstr(i, str);
		else
			ft_putchar(i);
		i++;
	}

	return (0);
}
*/