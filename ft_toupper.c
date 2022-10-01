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
 * If the value of the character is between 'a' and 'z', subtract 32 from it
 * 
 * param int v The character to be converted.
 * 
 * return the value of the character converted to uppercase.
 */
int	ft_toupper(int v)
{
	if (v >= 'a' && v <= 'z')
		return (v - 32);
	return (v);
}
