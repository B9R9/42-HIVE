# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: briffard <briffard@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/19 07:56:16 by briffard          #+#    #+#              #
#    Updated: 2021/07/19 17:42:59 by briffard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
SRC = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c
INCL = ./includes/ft.h
OBJ = $(SRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $< -I$(INCL)

clean:
	$(RM) $(NAME) 

fclean: clean
	$(RM) $(OBJ) 
	
re: fclean all


 


