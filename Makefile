# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vcodrean <vcodrean@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/14 14:59:00 by vcodrean          #+#    #+#              #
#    Updated: 2022/09/16 19:47:18 by vcodrean         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CCFLAGS = -Wall -Wextra -Werror
RM = rm -rf


MY_SOURCES =ft_isdigit.c\
						ft_isalnum.c\
						ft_isalpha.c\
						ft_isascii.c\
						ft_isprint.c\
						ft_strlen.c\
						ft_memset.c\
						ft_bzero.c\
						ft_memcpy.c\
						ft_strlcpy.c\
						


OBJS = $(MY_SOURCES:.c=.o)
INCLUDE = libft.h

$(NAME) : $(OBJS) $(INCLUDE)
	@ar crs $(NAME) $(OBJS)

all: $(NAME)

%.o : %.c
	@$(CC) $(CCFLAGS) -c -o $@ $<
clean:
	@rm -f $(OBJS)
fclean:
	@rm -f $(NAME)
re: all clean
.PHONY: all clean fclean re