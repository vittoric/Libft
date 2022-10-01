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
 * If the value is between 'A' and 'Z', return the value plus 32, 
 * otherwise return the value.
 * 
 * param int v The character to be converted.
 * 
 * return The lowercase version of the character.
 */
int	ft_tolower(int v)
{
	if (v >= 'A' && v <= 'Z')
		return (v + 32);
	return (v);
}
