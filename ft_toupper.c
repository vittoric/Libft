/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcodrean <vcodrean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:52:25 by vcodrean          #+#    #+#             */
/*   Updated: 2022/10/01 10:25:40 by vcodrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * If the character passed as an argument is a lowercase, convert to upper
 * 
 * param int v The character to be converted.
 * 
 * return the value of the character converted to uppercase.
 */
int	ft_toupper(int c)  //carácter pasado como argumento
{
	if (c >= 'a' && c <= 'z') //Si c es una letra minúscula
		return (c - 32);  //devuelve su equivalente en mayúscula (ver tabla ASCII porque -32 nos situa en la posicion de la misma letra pasada pero en mayúscula)
	return (c); //de lo contrario, devuelve c (carácter pasado como argumento)
}
