/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcodrean <vcodrean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:00:49 by vcodrean          #+#    #+#             */
/*   Updated: 2022/10/01 10:19:24 by vcodrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * It counts the number of characters in a string.
 * 
 * param char str This is the string that we are going to find the length of.
 * 
 * return The length of the string.
 */

size_t	ft_strlen(const char *str) //Esta es la cadena de la que vamos a encontrar la longitud
{
	size_t	i; //declaro una variable contador

	i = 0; //igualar el contador a cero
	while (str[i] != '\0') //mientras mi string en la posicion i sea distinto de caracter nulo de terminación 
	i++; //aumento el iterador
	return (i); // devuelvo el número de caracteres de la cadena 
}
