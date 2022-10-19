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

/**  Move n bytes (len) from memory area src to memory area dst when dst is greater then src.
  Otherwise, only dest len characters will be copied.
  The two strings may overlap;
  
 * If the destination pointer is greater than the source pointer, then copy  the source pointer to the
 * destination pointer in reverse order. Otherwise, copy the source pointer  to the destination pointer
 * in the normal order
 * 
 * @param void dst This is the destination array where the content is to be copied, type-casted to a pointer.
 * @param void src The source string.
 * @param size_t len The number of bytes to be moved.
 * 
 * @return A pointer to the destination string.
 */

void	*ft_memmove(void *dst, const void *src, size_t len) //Mueva n bytes (len) del área de memoria src al área de memoria dst cuando dst es mayor que src.
{
	unsigned char	*d;
	unsigned char	*s;

	if (src == NULL && dst == NULL)
		return (NULL);
	d = (unsigned char *)dst; // igualo mis punteros al valor de sus parametros
	s = (unsigned char *)src; 
	if (d >= s) // //si s(source)  es mayor o igual que la pos de mi d(dest)
	{
		while (len--) //el tamaño de mi buffer sea distinto de cero
			d[len] = s[len]; // voy copiando cada elemento a la inversa para evitar overlaping.
	}
	else //si no
		ft_memcpy(d, s, len); // copio todos mis caracteres secuencialmente con memcpy
	return (dst); //retorno dest.
}
