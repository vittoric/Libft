/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcodrean <vcodrean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 15:57:14 by vcodrean          #+#    #+#             */
/*   Updated: 2022/10/01 10:15:46 by vcodrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
 The function ft_strchr() locates the first occurrence of c 
 (converted to a char) in the string pointed to by s
 * 
 * param s The string to search.
 * param c The character to search for.
 * 
 * return A pointer to the first occurrence of the character c in the string s.
 */
char	*ft_strchr(const char *s, int c)
{
	char	a;

	a = c;
	while (*s)
	{
		if (*s == a)
		{
			return ((char *) s);
		}
		s++;
	}
	if (a == '\0')
		return ((char *) s);
	return (0);
}
