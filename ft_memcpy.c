/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcodrean <vcodrean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 17:03:40 by vcodrean          #+#    #+#             */
/*   Updated: 2022/10/01 10:11:33 by vcodrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Copy n bytes from memory area src to memory area dst
 * 
 * param void dst The destination string.
 * param void src The source string.
 * param size_t n the number of bytes to copy
 * 
 * return A pointer to the destination string.
 */
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	i;

	if (src == NULL && dst == NULL) // si origen o destino son nulos
		return (NULL); //retorno null. 
	i = 0;
	while (i < n)// mientra i menosr al tamaño de mi buffer
	{
		((char *)dst)[i] = ((const char *)src)[i];  //igual mi destino de i a la funte de i
		i++; //aumento i para poder seguir comparando los 2 strings
	}
	return (dst); //retorno dest modificado. 
}
