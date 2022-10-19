/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcodrean <vcodrean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 11:50:25 by vcodrean          #+#    #+#             */
/*   Updated: 2022/10/01 10:18:20 by vcodrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The function ft_strlcat() appends(add) the null-terminated string src to the 
 * end of dst. It will append at most dstsize - strlen(dst) - 1 bytes,
 *  NUL-terminating the result
 * 
 * param char dest The destination string.
 * param char src The string to be appended.
 * param size_t dstsize The size of the destination buffer.
 * 
 * return The length of the string it tried to create in dest.
 */
size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	dstlen; //variable para guardar l alongidyd de dest
	size_t	srclen; //variable para guardar l alongidyd de src
	size_t	i;  //variable iterador

	dstlen = ft_strlen(dest); //mide y almacena la longitud de dest.
	srclen = ft_strlen(src);  //mide y almacena la longitud de src.
	i = 0;  //inicio el iterador a cero
	if (dstsize == 0). //control de errores: si el numero de caracteres a copiar es cero
		return (srclen); //devuelvo la longitud del origen
	if (dstsize <= dstlen)  //si el tamaño de mi buffer es menor o igual que la longitud de mi destino
		return (srclen += dstsize); //devuelvo la longitud de mi origen + el tamaño de mi buffer
	else //si no
		srclen += dstlen; ////devuelvo la longitud de mi origen + el la longitud de mi destino
	while (src[i] != '\0' && dstlen < dstsize - 1 && dest != src) // mientras el origen en la posicion i llege al final y
	{								// la longitud del destino sea menor al tamaño de buffer menos 1 y destino sea diferente al origen
		dest[dstlen] = src[i];
		i++;
		dstlen++;
	}
	dest[dstlen] = '\0';
	return (srclen);  // La longitud de la cadena que intentó crear en dest
}
