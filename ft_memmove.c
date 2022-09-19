/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcodrean <vcodrean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 19:38:52 by vcodrean          #+#    #+#             */
/*   Updated: 2022/09/19 19:47:24 by vcodrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*move n bytes (len) 
  from memory area src to memory area dst when dst is greater then src.
  Otherwise, only dest len characters will be copied.*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*ptr;
	unsigned char	*ptr2;

	ptr = (unsigned char *)src;
	ptr2 = (unsigned char *)dst;
	if (ptr2 >= ptr)
	{
		while (len--)
			ptr2[len] = ptr[len];
	}
	else
		ft_memcpy(ptr2, ptr, len);
	return (dst);
}
