/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcodrean <vcodrean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:50:49 by vcodrean          #+#    #+#             */
/*   Updated: 2022/10/01 10:08:19 by vcodrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * If the value of the integer passed to the function is 
 * between 32 and 126(imprimible), return 1, otherwise return 0
 * 
 * param int v The value to be checked.
 * 
 * return 1 if the character is printable, 0 if not.
 */
int	ft_isprint(int v)
{
	if (v >= 32 && v <= 126)
		return (1);
	return (0);
}
