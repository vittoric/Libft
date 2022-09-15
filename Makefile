# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vcodrean <vcodrean@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/14 14:59:00 by vcodrean          #+#    #+#              #
#    Updated: 2022/09/15 13:41:27 by vcodrean         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CCFLAGS = -Wall -Wextra -Werror
RM = rm -rf


MY_SOURCES = ft_isalpha.c\
						ft_isdigit\
						ft_isalnum\
						ft_isascii\
						ft_isprint\
						ft_strlen\
						ft_memset\
						ft_bzero\
						ft_memcpy\
						ft_memmove\
						ft_strlcpy\
						ft_strlcat\
						ft_toupper\
						ft_tolower\
						ft_strchr\
						ft_strrchr\
						ft_strncmp\
						ft_memchr\
						ft_memcmp\
						ft_strnstr\
						ft_atoi\
						


MY_OBJECTS = $(MY_SOURCES:.c = .o)

clean : 
		$(RM) $(MY_OBJECTS) 

fclean: clean
			$(RM) $(NAME) 