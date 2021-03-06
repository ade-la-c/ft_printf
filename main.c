/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 19:57:38 by ade-la-c          #+#    #+#             */
/*   Updated: 2020/11/01 16:39:13 by ade-la-c         ###   ########.fr       */
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
//	printf("|%3.*s|\n", -8, "hello");
//	ft_printf("|%3.*s|\n", -8, "hello");
//	printf("|%10s|\n", "hello");				//string tests
//	ft_printf("|%-10s|\n", "hello");
//	printf("|%-10s|\n", "hello");
//	ft_printf("|%s|\n", "");
//	printf("|%s|\n", "");
//	ft_printf("|%5s|\n", "hellooo");
//	printf("|%5s|\n", "hellooo");
//	ft_printf("|%s|\n", NULL);
//	printf("|%.*s|\n", -1, "hello");
//	ft_printf("|%.*s|\n", -1, "hello");
//	ft_printf("|%.8s|\n", "hello");
//	ft_printf("|%*.4s|\n", 0, "hello");
//	ft_printf("|%s|\n", "hello");

//	printf("|%.6d|\n", -555);
//	printf("|%07d|\n", -555);
//	printf("|%06d|\n", -555);
//	printf("|%d|\n", 555);						//integer tests
//	printf("|%d|\n", 555);
//	printf("|%.0d|\n", 0);
//	ft_printf("|%.0d|\n", 0);
//	printf("|%.5d|\n", -555);
//	ft_printf("|%.i|\n" -5);

//	printf("|%u|\n", 4294967295u);
//	ft_printf("|%u|\n", 4294967295u);			//unsigned tests
//	printf("|%20u|\n", -500);
//	ft_printf("|%20u|\n", -500);
//	printf("|%20u|\n", -100);
//	ft_printf("|%20u|\n", -100);


//	printf("|%12p|\n", (void*)"12345");
//	printf("|%10p|\n", (void*)"12345");
//	printf("|%-12p|\n", (void*)"12345");
//	printf("|%p|\n", (void*)-899);
//	ft_printf("|%05%|\n");
//	printf("|%12p|\n", (void*)"12345");			//pointer tests
//	ft_printf("|%12p|\n", (void*)"12345");
//	printf("|%-12p|\n", (void*)"12345");
//	printf("|%-*p|\n", -12, (void*)"12345");
//	ft_printf("|%p|\n", (void*)"12345");

//	ft_printf("|%X|\n", 17);
//	printf("|%X|\n", 17);
//	ft_printf("|%05x|\n", 17);
//	printf("|%05x|\n", 17);
//	ft_printf("|%-10x|\n", 17);
//	printf("|%-10x|\n", 17);
//	ft_printf("|%.3x|\n", 17);
//	printf("|%.3x|\n", 17);						//hex tests
//	ft_printf("|%03x|\n", 17);
//	printf("|%03x|\n", 17);
//	ft_printf("|%5.3x|\n", 17);
//	printf("|%5.3x|\n", 17);
//	ft_printf("|%-5.3x|\n", 17);
//	printf("|%-5.3x|\n", 17);
//	ft_printf("|%05.3x|\n", 17);
//	printf("|%05.3x|\n", 17);
//	ft_printf("|%8.3x|\n", 8375);
//	printf("|%8.3x|\n", 8375);
//	ft_printf("|%-8.0x|\n", 8375);
//	printf("|%-8.0x|\n", 8375);
//	ft_printf("|%5.x|\n", 0);
//	printf("|%5.x|\n", 0);

//	printf("~%d~\n", printf("--123456%800d %x--%-55.*s", 11, 3465456, 8, "bonjour"));
//	printf("~%d~\n", ft_printf("--123456%800d %x--%-55.*s", 11, 3465456, 8, "bonjour"));

//	ft_printf("|%p|\n", (void*)0x1900);
//	printf("|%0*d|\n", -5, 10);					//fixing
//	printf("|%10.p|\n", NULL);
//	printf("|%-10.p|\n", NULL);
//	printf("|%.p|\n", NULL);
//	ft_printf("|%6u|\n", 100u);
//	printf("|%6u|\n", 100u);

//	printf(" ~~%d~~\n", ft_printf("neg9 %*.*d\n", 200, 155, -3000));
//	printf(" ~~%d~~\n", printf("neg9 %*.*d\n", 200, 155, -3000));
	
	ft_printf("%05.*x\n", -8, 500);
	printf("%05.*x\n", -8, 500);

//	printf("~~%d~~\n", ft_printf("ultimate2 %*i %*u ", 10000, -55, 1, -60));
//	printf("~~%d~~\n", printf("ultimate2 %*i %*u ", 10000, -55, 1, -60));
/*
	ft_printf("%-49.148X\n", 1788014179u);
	printf("%-49.148X\n", 1788014179u);
	ft_printf("%-144c\n", -42);
	printf("%-144c\n", -42);
	ft_printf("%---47.*x\n", -140, 1771987060u);
	printf("%---47.*x\n", -140, 1771987060u);
	ft_printf("%-140.*X\n", -145, 3144147879u);
	printf("%-140.*X\n", -145, 3144147879u);
	ft_printf("%-115.118s\n", "H\vYsk&|8>-[gth=Kx5_0Qr`*<Q+");
	printf("%-115.118s\n", "H\vYsk&|8>-[gth=Kx5_0Qr`*<Q+");
*/
/*
	-> cacharle pft <-
	%u reste a fix, un '0' de trop est print, c'est donc une valeur simple a tweak
	reste a savoir la quelle et sous quelles conditions
*/
	//system("leaks a.out");
/*
	t_flag	f;
	int		nbr = 0;
	initflags(&f);
	f.prec = 1;
	printf("\n~%d~\n", printnbr(f, nbr, 1));
	printf("%.*d <=correct answer\n", f.prec, nbr);
*/
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