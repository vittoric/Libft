/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcodrean <vcodrean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 19:38:52 by vcodrean          #+#    #+#             */
/*   Updated: 2022/10/01 10:12:39 by vcodrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**move n bytes (len) 
  from memory area src to memory area dst when dst is greater then src.
  Otherwise, only dest len characters will be copied.
 * If the destination pointer is greater than the source pointer, then copy 
 the source pointer to the
 * destination pointer in reverse order. Otherwise, copy the source pointer 
 to the destination pointer
 * in the normal order
 * 
 * @param void dst This is the destination array where the content is to be 
 * copied, type-casted to a
 * pointer.
 * @param void src The source string.
 * @param size_t len The number of bytes to be moved.
 * 
 * @return A pointer to the destination string.
 */
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*ptr;
	unsigned char	*ptr2;

	if (src == NULL && dst == NULL)
		return (NULL);
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
