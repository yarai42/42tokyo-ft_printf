# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yarai </var/mail/yarai>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/23 21:58:47 by yarai             #+#    #+#              #
#    Updated: 2022/10/03 18:39:42 by yarai            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libftprintf.a
CC := gcc
CFLAGS := -Wall -Wextra -Werror
AR := ar rcs
RM := rm -f

SRCS := ft_printf.c \
	ft_identifier.c \
	output/ft_output_nbr.c \
	output/ft_convertTohexa.c \
	output/ft_output.c \
	output/ft_uitoa.c \

OBJS := $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	make -C libft/
	cp libft/libft.a .
	mv libft.a libftprintf.a
	$(AR) $@ $^

.c.o: $(SRCS)
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	$(RM) $(OBJS) $(BOBJS)
	make clean -C libft/ 

fclean: clean
	$(RM) $(NAME)
	$(RM) libft.a

re: fclean all

.PHONY: all clean fclean re
