/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcodrean <vcodrean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 18:00:09 by vcodrean          #+#    #+#             */
/*   Updated: 2022/10/01 10:22:38 by vcodrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * If the first character of needle is found in haystack, then check if the 
 * rest of needle is found in haystack starting at the index of the first 
 * character of needle
 * 
 * @param char haystack The string to search in
 * @param char needle the string to find
 * @param size_t len the maximum number of characters to search in haystack
 * 
 * @return a pointer to the first occurrence of the substring needle in 
 * the string haystack.
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[i] == '\0')				// si mi string buscado es igual a 0
		return (((char *)haystack + i));	//retorno un puntero al string de origen
	while (haystack[i] != '\0' && i < len)		//mientras mi string de origen sea distinto de cero &&  i menor al tamaño de mi buffer  
	{
		if (haystack[i] == needle[j])		//si el haystack en la posicion i es igual al needle en la posicion j
		{
			while (haystack[i + j] == needle[j] && ((i + j) < len))  //
			{
				if (needle[j + 1] == '\0')
					return (((char *)haystack + i));
				j++;
			}
			j = 0;
		}
		i++;
	}
	return (0);
}
