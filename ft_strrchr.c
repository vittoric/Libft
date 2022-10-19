/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcodrean <vcodrean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:09:22 by vcodrean          #+#    #+#             */
/*   Updated: 2022/10/01 10:22:55 by vcodrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
It returns a pointer to the last occurrence of the character c in the string s.
 * 
 * @param s The string to search
 * @param c the character to search for
 * 
 * @return The address of the last occurrence of the character c in the string s.
 */
char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	a;

	a = c; 					//se iguala la variable al valor de sus parametro de entrada
	i = ft_strlen(s); 			//guardo en la variable i la longitud de la string s
	if (a == 0) 				// si el caracter a buscar no existe
		return ((char *) &s[i]);  	//devuelve ls direccion de ls dtring de i casteada como char puntero
	while (i >= 0) 				// mientras la longidut de string sea mayor o igual a cero
	{
		if (s[i] == a) 			 // y si la string de i en este momento es igual al caracter que estoy buscando
			return ((char *)&s[i]); // devuelvo la direccion en memoria del puntero de la coincidencia del caracter buscado casteado a char
		i--; 				// disminuio mi iterador para recorrer mi string desde el final hacia el princoipioi
	}
	return (0); 				// en caso contrario, devuelvo cero
}
