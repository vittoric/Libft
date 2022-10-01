/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcodrean <vcodrean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:25:57 by vcodrean          #+#    #+#             */
/*   Updated: 2022/10/01 10:21:18 by vcodrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The function ft_strncmp() compares the first n characters of the strings s1 
 * and s2
 * 
 * param char s1 The first string to be compared.
 * param char s2 The string to compare to.
 * param size_t n The maximum number of characters to compare.
 * 
 * return The difference between the first two characters that differ in the 
 * trings being compared.
 */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t		i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		else if (s1[i] == '\0')
			return (0);
i++;
	}
	return (0);
}
