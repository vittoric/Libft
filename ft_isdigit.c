/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcodrean <vcodrean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:16:04 by vcodrean          #+#    #+#             */
/*   Updated: 2022/10/01 10:07:28 by vcodrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Comprueba si el carácter es un dígito.
 */
int	ft_isdigit(int c) // int v El carácter que se comprobará.
{
	if (c >= '0' && c <= '9')
		return (1); //devuelve 1 si el carácter es un dígito
	return (0); //0 si no lo es
}
