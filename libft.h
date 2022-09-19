/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcodrean <vcodrean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 17:47:55 by vcodrean          #+#    #+#             */
/*   Updated: 2022/09/19 13:05:51 by vcodrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

int	ft_isalpha(int v);
int	ft_isdigit(int v);
int	ft_isalnum(int v);
int	ft_isascii(int v);
int	ft_isprint(int v);
size_t	ft_strlen(const char *str);
void    ft_bzero(void *s, size_t n);
void    *ft_memset(void *ptr, int x, size_t n);
void    *ft_memcpy(void *dst, const void *src, size_t n);
size_t      ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	    ft_strlcat(char *dest, const char *src, size_t dstsize);
int		ft_toupper(int c);
int	ft_tolower(int v);

#endif