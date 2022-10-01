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
 * It checks if the character is a digit.
 * 
 * param int v The character to be checked.
 * 
 * return 1 if the character is a digit, 0 if not.
 */
int	ft_isdigit(int v)
{
	if (v >= '0' && v <= '9')
		return (1);
	return (0);
}
