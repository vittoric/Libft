/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcodrean <vcodrean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 19:38:52 by vcodrean          #+#    #+#             */
/*   Updated: 2022/10/01 10:12:39 by vcodrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**move n bytes (len) 
  from memory area src to memory area dst when dst is greater then src.
  Otherwise, only dest len characters will be copied.
  The two strings may overlap;
 * If the destination pointer is greater than the source pointer, then copy 
 the source pointer to the
 * destination pointer in reverse order. Otherwise, copy the source pointer 
 to the destination pointer
 * in the normal order
 * 
 * @param void dst This is the destination array where the content is to be 
 * copied, type-casted to a
 * pointer.
 * @param void src The source string.
 * @param size_t len The number of bytes to be moved.
 * 
 * @return A pointer to the destination string.
 */
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*ptr;
	unsigned char	*ptr2;

	if (src == NULL && dst == NULL)
		return (NULL);
	ptr = (unsigned char *)src; // igualo mis punteros al valor de sus parametros
	ptr2 = (unsigned char *)dst;
	if (ptr2 >= ptr) // //si ptr2(source)  es mayor o igual que la pos de mi ptr(dest). 
	{
		while (len--) //el tamaño de mi buffer sea distinto de cero
			ptr2[len] = ptr[len]; // voy copiando cada elemento a la inversa para evitar overlaping.
	}
	else //si no
		ft_memcpy(ptr2, ptr, len); // copio todos mis caracteres secuencialmente con memcpy
	return (dst); //retorno dest.
}
