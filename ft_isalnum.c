/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcodrean <vcodrean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 17:32:39 by vcodrean          #+#    #+#             */
/*   Updated: 2022/10/01 10:05:29 by vcodrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Comprueba si el carácter es alfanumérico.
 */
int	ft_isalnum(int v) //int v El carácter que se comprobará.
{
	return (ft_isalpha(v) || ft_isdigit(v));  	//las condiciones en un return hacen que se evaluan 
							//directamente si una de las condiciones es verdadera o falsa
}
