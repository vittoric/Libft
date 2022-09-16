/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcodrean <vcodrean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 12:34:34 by vcodrean          #+#    #+#             */
/*   Updated: 2022/09/16 16:57:35 by vcodrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*erases the data in the n bytes of the memory
	starting at the location pointed to by s, by writing zeros (bytes
	containing '\0') to that area*/

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
