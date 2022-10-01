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
 * Checks if the character is alphanumeric.
 * 
 * param int v The character to be checked.
 */
int	ft_isalnum(int v)
{
	return (ft_isalpha(v) || ft_isdigit(v));
}
