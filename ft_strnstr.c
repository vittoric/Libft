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
	size_t h;
	size_t n;

	h = 0;
	if (needle[h] == '\0')  			// si mi string buscado es igual a 0
		return ((char *)haystack);  		//retorno un puntero al string de origen
	while (haystack[h] != '\0') 			//mientras la sring en que busco sea diferente de cero
	{
		n = 0;
		while (haystack[h + n] == needle[n] && (h + n) < len)
		{
			if (haystack[h + n] == '\0' && needle[n] == '\0')
				return ((char *)&haystack[h]);
			n++;
		}
		if (needle[n] == '\0')
			return ((char *)haystack + h);
		h++;
	}
	return (0);
}

}
