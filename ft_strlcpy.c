/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcodrean <vcodrean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 18:13:32 by vcodrean          #+#    #+#             */
/*   Updated: 2022/10/01 10:19:09 by vcodrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Copy the string pointed to by src, including the terminating null byte ('\0'),
 * to the buffer pointed to by dst
 * 
 * param char dst This is the destination string.
 * param char src The string to be copied.
 * param size_t dstsize The size of the destination buffer.
 * 
 * return The length of the string src.
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)  //Copia la cadena a la que apunta src,  al búfer señalado por dst
{
	size_t	i;
	size_t	len;  //creo una variable para guardar la longitud de src

	len = ft_strlen(src);  //guardo el la variable len la longitud de mi string de origen
	if (dstsize < 1) //si el tamaño de mi buffer es menor que 1
		return (len); //devuelvo la longitud de mi origen
	i = 0;  //inicializo mi variable en cero
	while (src[i] != '\0' && i < (dstsize - 1)) //mientras mi origen en la posicion i sea distinto a caracter nulo. Y mi contador sea menor que mi buffer menos 1 PARA EL CHAR NULO.
	{
		dst[i] = src[i];  //copio mi origen en el destino
		i++; //y voy avanzando para recorer el src
	}
		dst[i] = '\0'; //por ultimo cierro con caracter nulo mi destino
	return (len); //devuelvo la longitud total de la cadena a crear (longitud de src)
}
