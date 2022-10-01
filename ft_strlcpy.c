/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcodrean <vcodrean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 18:13:32 by vcodrean          #+#    #+#             */
/*   Updated: 2022/10/01 10:19:09 by vcodrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Copy the string pointed to by src, including the terminating null byte ('\0'),
 * to the buffer pointed to by dst
 * 
 * param char dst This is the destination string.
 * param char src The string to be copied.
 * param size_t dstsize The size of the destination buffer.
 * 
 * return The length of the string src.
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(src);
	if (dstsize < 1)
		return (len);
	i = 0;
	while (src[i] != '\0' && i < (dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
		dst[i] = '\0';
	return (len);
}
