/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcodrean <vcodrean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 16:33:34 by vcodrean          #+#    #+#             */
/*   Updated: 2022/09/16 12:25:17 by vcodrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*fill a byte string with a byte value*/
//llenar un bloque de memoria con un valor particular.

// ptr ==> Starting address of memory to be filled
// x   ==> Value to be filled
// n   ==> Number of bytes to be filled starting from ptr to be filled

void	*ft_memset(void *ptr, int x, size_t n)
{
	unsigned char	*s;
	size_t			i;

	i = 0;
	s = ptr;
	while (i < n)
	{
		s[i] = (unsigned char)(x);
		i++;
	}
	return (ptr);
}

/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	str1[] = "Cupcake ipsum dolor sit amet pie toffee";
	char	str2[] = "Cupcake ipsum dolor sit amet pie toffee";
	printf("ORIGINAL:\n");
	printf("Before: %s\n",str1);
	memset(str1+5, '.', 8);
	printf("After: %s\n", str1);
	printf("MINE: \n");
	printf("Before: %s\n", str2);
	ft_memset(str2+5, '.', 8);
	printf("After: %s\n", str2);
	return (0);
}*/