/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcodrean <vcodrean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:46:53 by vcodrean          #+#    #+#             */
/*   Updated: 2022/10/01 10:10:59 by vcodrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**Compara los caracteres de dos búferes
 * The function ft_memcmp() compares the first n bytes of 
 * the memory area s1 to the first n bytes of
 * the memory area s2
 * 
 * @param void s1 The first string to be compared.
 * @param void s2 The string to be compared.
 * @param size_t n The number of bytes to compare.
 * 
 * @return The difference between the first two bytes that are different.
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t					i;
	unsigned const char		*str1;
	unsigned const char		*str2;

	i = 0;
	str1 = (unsigned const char *)s1;
	str2 = (unsigned const char *)s2;
	while (i < n) //mientras i < que el tamaño de mi buffer
	{
		if (*str1 != *str2)
		{
			return ((int)(*str1 - *str2));
		}
		str1++;
		str2++;
		i++;
	}
	return (0);
}
