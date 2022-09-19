/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcodrean <vcodrean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 11:50:25 by vcodrean          #+#    #+#             */
/*   Updated: 2022/09/19 12:51:24 by vcodrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;

	dstlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	i = 0;
	if (dstsize == 0)
		return (srclen);
	if (dstsize <= dstlen)
		return (srclen += dstsize);
	else
		srclen += dstlen;
	while (src[i] != '\0' && dstlen < dstsize - 1 && dest != src)
	{
		dest[dstlen] = src[i];
		i++;
		dstlen++;
	}
	dest[dstlen] = '\0';
	return (srclen);
}
