/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcodrean <vcodrean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:05:00 by vcodrean          #+#    #+#             */
/*   Updated: 2022/10/01 10:16:07 by vcodrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Ft_strdup() allocates memory for a copy of the string s1,
 *  does the copy, and returns a pointer to it
 * 
 * param char s1 The string to be copied.
 * 
 * return A pointer to a new string that is a duplicate of the string s1.
 */
char	*ft_strdup(const char *s1) //string a copiar
{
	char	*ptr;
	int		size;

	size = ft_strlen(s1);  //almaceno la longitud de s1 en ls vsrisblr size
	ptr = malloc(sizeof(char) * (size + 1)); //ptr = se reserva memoria con malloc de la longitud guardada  + 1 
	if (ptr == NULL) //si la reserva falla
		return (NULL); //retorno null
	ft_memcpy(ptr, s1, size); //copiao mi string a un area de memoria nueva apuntada por ptr, hasta size
	ptr[size] = '\0'; // se cierra el final del string con un caracter vacio.
	return (ptr); //devuelve un puntero a una nueva cadena que es un duplicado de la cadena s1
}
