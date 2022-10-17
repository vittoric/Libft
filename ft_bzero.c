/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcodrean <vcodrean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 12:34:34 by vcodrean          #+#    #+#             */
/*   Updated: 2022/10/01 10:04:00 by vcodrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Ft_bzero() is a function that writes n zeroed bytes to the string s
 * 
 * erases the data in the n bytes of the memory
	starting at the location pointed to by s, by writing zeros (bytes
	containing '\0') to that area
 * param void s This is the pointer to the memory area to be filled.
 * param size_t n The number of bytes to be set to zero.
 */

void	ft_bzero(void *s, size_t n) // escribe n bytes puestos a cero en la cadena s
{
	ft_memset(s, 0, n); 	//borra los datos en los n bytes de la memoria 
				//comenzando en la ubicación señalada por s, escribiendo ceros (0) en esa área
}
