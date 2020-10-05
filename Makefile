# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/17 10:33:51 by ade-la-c          #+#    #+#              #
#    Updated: 2020/10/05 17:19:51 by ade-la-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a

LIBDIR		= ./libft

LIB			= libft.a

SRCS		= ft_printf.c \
			parser.c \
			directions.c \
			print_c.c \
			print_s.c \
			print_id.c \
			utils.c \

OBJS		= $(SRCS:.c=.o)

CC			= gcc

CFLAGS		= -Wall -Wextra -Werror

AR			= libtool -static -o

RM			= rm -f

MAKE		= make

OUT_PREFIX	= \033[38;5;220mft_printf\033[38;5;253m : \033[0m

.c.o:
			@$(CC) $(CFLAGS) -I. -c $^ -o $@

$(NAME):	$(OBJS)
			@$(MAKE) -C $(LIBDIR)
			@$(AR) $(NAME) $(LIBDIR)/$(LIB) $(OBJS)
			@ranlib $(NAME)
			@echo "${OUT_PREFIX}\033[38;5;46mLibrary compiled\033[0m"

all:		$(NAME)

clean:
			@$(MAKE) -C $(LIBDIR) clean
			@$(RM) $(OBJS)
			@echo "${OUT_PREFIX}\033[38;5;46mObjects cleaned\033[0m"

fclean:		clean
			@$(MAKE) -C $(LIBDIR) fclean
			@$(RM) $(NAME)
			@echo "${OUT_PREFIX}\033[38;5;46mLibrary cleaned\033[0m"

re:			fclean all

.PHONY:		all clean fclean re