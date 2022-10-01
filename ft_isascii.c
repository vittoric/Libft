/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcodrean <vcodrean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:09:28 by vcodrean          #+#    #+#             */
/*   Updated: 2022/10/01 10:06:33 by vcodrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Checks if the value is in the ascii range.
 * 
 * param int v The value to be checked.
 * 
 * return 1 if the value is between 0 and 127, 0 otherwise.
 */
int	ft_isascii(int v)
{
	if (v >= 0 && v <= 127)
		return (1);
	return (0);
}
