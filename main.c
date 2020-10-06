/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 19:57:38 by ade-la-c          #+#    #+#             */
/*   Updated: 2020/10/06 18:26:18 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/*
int		main(void)
{
	ft_printf("%-5c\n", 'e');
	return (0);
}
*/

int				main(void)
{
//	printf("|%-*d|\n", 5, 5);
//	printf("|%5.5d|\n", 5);
//	printf("|%05.5d|\n", 5);
//	printf("|%5.*d|\n", 5, 5);
//	printf("|%05.*d|\n", -10, 5);
//	printf("|%05.*d|\n", -1, 5);
//	printf("|%05.*d|\n", -5, 5);
//	printf("|%05.*d|\n", 0, 5);				//parsing tests
//	printf("|%*d|\n", 5, 5);
//	printf("|%-----*d|\n", -10, 9);
//	printf("|%012.5d|\n", 8);
//	printf("|%%|\n");
//	printf("|%-5.5%|\n");
//	printf("%d\n", ft_atoi("o235"));

//	printf("|%c|\n", 'E');
//	ft_printf("|%c|\n", 'E');
//	printf("|%5c|\n", 'E');
//	ft_printf("|%5c|\n", 'E');
//	printf("|%-5c|\n", 'E');
//	ft_printf("|%-5c|\n", 'E');
//	printf("|%*c|\n", 5, 'E');
//	ft_printf("|%*c|\n", 5, 'E');
//	printf("|%*c|\n", -5, 'E');
//	ft_printf("|%*c|\n", -5, 'E');
//	printf("|%-*c|\n", 5, 'E');	
//	ft_printf("|%-*c|\n", 5, 'E');	
//	printf("|%05c|\n", 'E');					//char tests
//	printf("|%5.5c|\n", 'E');
//	printf("|%-5.5c|\n", 'E');
//	printf("|%05.5c|\n", 'E');
//	printf("|%c|\n", -1);
//	ft_printf("|%c|\n", -1);

//	printf("|%5s|\n", "oui");
//	printf("|%-5.0s|\n", "oui");
//	printf("|%2.5s|\n", "oui");
//	printf("|%-5s|\n", "oui");
//	printf("|%5.s|\n", "oui");
//	printf("|%5.5s|\n", "oui");
//	ft_printf("|%.2s|\n", "hello");
//	printf("|%.2s|\n", "hello");
//	ft_printf("|%10.2s|\n", "hello");
//	printf("|%10.2s|\n", "hello");
//	ft_printf("|%10s|\n", "hello");
//	printf("|%10s|\n", "hello");				//string tests
//	ft_printf("|%-10s|\n", "hello");
//	printf("|%-10s|\n", "hello");
//	ft_printf("|%s|\n", "");
//	printf("|%s|\n", "");
//	ft_printf("|%5s|\n", "hellooo");
//	printf("|%5s|\n", "hellooo");
//	ft_printf("|%s|\n", NULL);
	printf("|%.*s|\n", -1, "hello");			//je segfault pour aucune raison
	ft_printf("|%.*s|\n", -1, "hello");
//	ft_printf("|%.8s|\n", "hello");
//	ft_printf("|%*.4s|\n", 0, "hello");
//	ft_printf("|%s|\n", "hello");

//	printf("|%3.5d|\n", 555);
//	printf("|%05d|\n", 555);
//	printf("|%d|\n", 555);
//	printf("|%d|\n", 555);
//	printf("|%d|\n", 555);
//	ft_printf("|%d|\n", 88);
	//system("leaks a.out");
	return (0);
}

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
