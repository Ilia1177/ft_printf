# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: npolack <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/26 10:27:51 by npolack           #+#    #+#              #
#    Updated: 2024/10/18 10:25:35 by npolack          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libftprintf.a

LIBFT		=	./libft/libft.a

SRCS	=	./srcs/ft_printf.c\
			./srcs/ft_print_str.c\
			./srcs/ft_print_char.c\
			./srcs/ft_print_dec.c\
			./srcs/ft_print_hex.c\
			./srcs/ft_print_unsigned.c\
			./srcs/ft_putnb_base.c\
			./srcs/ft_print_address.c\
			./srcs/ft_parse.c\
			./srcs/get_intlen.c

OBJS		=	$(SRCS:.c=.o)

AR 			=	ar -rcs

CC			=	cc 

CFLAGS		=	-Wall -Wextra -Werror -g

RM			=	rm -f

all				:	$(NAME) 

$(NAME)			:	$(OBJS) $(LIBFT)
					cp $(LIBFT) $(NAME)
					$(AR) $(NAME) $(OBJS)

$(LIBFT)	:
		make -C libft

.c.o	 		:
	$(CC) $(CFLAGS) -c $< -o $@ -g

main	: $(NAME)
	cc main.c $(NAME)

run		:	main
			./a.out

clean	:	
			make clean -C libft
			$(RM) $(OBJS)

fclean	:	clean
			make fclean -C libft
			$(RM) $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re bonus
