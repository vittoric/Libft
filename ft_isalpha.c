/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcodrean <vcodrean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 12:49:06 by vcodrean          #+#    #+#             */
/*   Updated: 2022/10/01 10:06:09 by vcodrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* test any char for an alphabetic char */

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && x <= 'z')) //mientras mi char es alfabetico
		return (1); //devuele 1 que es verdadero
	return (0); // si no devuelve 0 que es falso
}
