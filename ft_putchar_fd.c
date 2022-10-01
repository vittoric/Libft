/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcodrean <vcodrean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:33:23 by vcodrean          #+#    #+#             */
/*   Updated: 2022/10/01 10:13:00 by vcodrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Ft_putchar_fd() writes the character c to the file descriptor fd.
 * 
 * param char c the character to print
 * param int fd file descriptor
 */
void	ft_putchar_fd(char c, int fd)
{
	if (fd >= 0)
		write (fd, &c, 1);
}
