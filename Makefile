# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vcodrean <vcodrean@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/14 14:59:00 by vcodrean          #+#    #+#              #
#    Updated: 2022/10/01 09:50:05 by vcodrean         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc //compildor
CCFLAGS = -Wall -Wextra -Werror //flags
RM = rm -rf //borrar


MY_SOURCES =ft_isdigit.c\
						ft_isalnum.c\
						ft_isalpha.c\
						ft_isascii.c\
						ft_isprint.c\
						ft_strlen.c\
						ft_memset.c\
						ft_bzero.c\
						ft_memcpy.c\
						ft_memmove.c\
						ft_strlcpy.c\
						ft_strlcat.c\
						ft_toupper.c\
						ft_tolower.c\
						ft_strchr.c\
						ft_strncmp.c\
						ft_memchr.c\
						ft_memcmp.c\
						ft_strnstr.c\
						ft_atoi.c\
						ft_calloc.c\
						ft_strdup.c\
						ft_substr.c\
						ft_strjoin.c\
						ft_strtrim.c\
						ft_putchar_fd.c\
						ft_putstr_fd.c\
						ft_putendl_fd.c\
						ft_putnbr_fd.c\
						ft_itoa.c\
						ft_strrchr.c\
						ft_strmapi.c\
						ft_striteri.c\
						ft_split.c


OBJS = $(MY_SOURCES:.c=.o) // una variable cuya dependencia es convertir los . c en .o

$(NAME) : $(OBJS)
	@ar crs $(NAME) $(OBJS) //crear el ejecutable

all: $(NAME)

%.o : %.c
	@$(CC) $(CCFLAGS) -c -o $@ $< //indicadores
clean:
	@$(RM) $(OBJS)
fclean: clean
	@rm -f $(NAME)
re: all fclean  //recompilar todo y limpiar
.PHONY: all clean fclean re
