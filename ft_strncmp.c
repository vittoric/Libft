/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcodrean <vcodrean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:25:57 by vcodrean          #+#    #+#             */
/*   Updated: 2022/10/01 10:21:18 by vcodrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The function ft_strncmp() compares the first n characters of the strings s1 
 * and s2
 * 
 * param char s1 The first string to be compared.
 * param char s2 The string to compare to.
 * param size_t n The maximum number of characters to compare.
 * 
 * return The difference between the first two characters that differ in the 
 * trings being compared.
 */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t		i;

	i = 0;  				// inicializo i en cero
	while (i < n && (s1[i] || s2[i]))	//mientras i sea menor que el tamño de mi buffer y por s1 de i o sa2 de i exista
	{
		if (s1[i] != s2[i])		//si s1 de i es diferente a s2 de i
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);	// devuelvo la diferencia de la ultima pocision coincidente
		else if (s1[i] == '\0')		// si s1 en la pocicion y es nulo
			return (0);		//devuelvo nulo
		i++;				// aumento el iterdor		
	}
	return (0);				// devuelvo nulo ( en el caso que no se me cumple el while)
}
