# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ekamada <ekamada@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/04 18:20:44 by ekamada           #+#    #+#              #
#    Updated: 2023/06/07 21:58:55 by ekamada          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c \
		ft_conversions.c \
		ft_print_c.c \
		ft_print_s.c \
		ft_print_di.c \
		ft_print_p.c \
		ft_print_u.c \
		ft_print_x.c \
		ft_print_larx.c \
		ft_itoa.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strchr.c \



CC = cc

CFLAGS = -Wall -Wextra -Werror

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@ -I.

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus