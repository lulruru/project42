# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/11 17:31:29 by rencarna          #+#    #+#              #
#    Updated: 2022/11/26 21:07:11 by russelenc        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Makefile doit au minimum contenir les règles $(NAME), all, clean, fclean et re

NAME = libftprintf.a

SRC = ft_printf.c ft_putft.c ft_putunisgned.c ft_putnbr.c \
	ft_putptr.c ft_itoa.c

CFLAGS =  -Wall -Werror -Wextra

CC = cc

CO = gcc

%.o : %.c 
	$(CC) -o $@ -c $< $(CFLAGS)  

OBJ = $(SRC:.c=.o)

OBJ_BONUS = $(BONUS:.c=.o)

all: $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)

bonus : $(OBJ) $(OBJ_BONUS) 
	ar rcs $(NAME) $(OBJ) $(OBJ_BONUS)

clean: 
	rm -f $(OBJ) $(OBJ_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
