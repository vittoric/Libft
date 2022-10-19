/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcodrean <vcodrean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 13:03:12 by vcodrean          #+#    #+#             */
/*   Updated: 2022/10/01 10:25:25 by vcodrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * If c is a uppercase letter, returns its lowercase equivalent. Otherwise,  it  returns  c.
 * 
 * param int v The character to be converted.
 * 
 * return The lowercase version of the character.
 */
int	ft_tolower(int c) //carácter pasado como argumento
{
	if (c >= 'A' && c <= 'Z'). //Si c es una letra mayúscula
		return (c + 32); //devuelve su equivalente en minúscula (ver tabla ASCII porque +32 nos situa en la posicion de la misma letra pasada pero en minuscula)
	return (c); //de lo contrario, devuelve c (carácter pasado como argumento)
}
