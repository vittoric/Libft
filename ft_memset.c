/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcodrean <vcodrean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 16:33:34 by vcodrean          #+#    #+#             */
/*   Updated: 2022/10/01 09:37:37 by vcodrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Ft_memset() takes a pointer to a memory location, a value to set, and the number of bytes to set,
 * and returns a pointer to the memory location
 * 
 * @param void ptr This is the pointer to the memory area to be filled.
 * @param int x the value to be set
 * @param size_t n The number of bytes to be set to the value c.
 * 
 * @return A pointer to the memory area s.
 */

void	*ft_memset(void *ptr, int x, size_t n) //string, el valor a sustituir y el tamaño de buffer
{
	unsigned char	*s;
	size_t			i;

	i = 0;
	s = ptr;
	while (i < n) //mientras i mentor al buffer.
	{
		s[i] = (unsigned char)x; //mi strng en la posicion i igual a x 
		i++; //y paso a la siguiente referencia de  memoria. 
	}
	return (ptr);  // devuelvo el string modificado
}
