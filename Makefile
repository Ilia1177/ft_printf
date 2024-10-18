# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: npolack <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/26 10:27:51 by npolack           #+#    #+#              #
#    Updated: 2024/10/17 19:27:38 by npolack          ###   ########.fr        #
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
					ar -rs $(NAME) $(OBJS) 
					$(RM) $(OBJS)

$(LIBFT)	:
		make -C libft
		mv $(LIBFT) $(NAME)

.c.o	 		:
	$(CC) $(CFLAGS) -c $< -o $@ -g

main	: $(NAME)
	cc main.c $(NAME)

run		:
			cc main.c -lftprintf 

clean	:	
			make clean -C libft
			$(RM) $(OBJS)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re bonus
