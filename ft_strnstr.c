/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcodrean <vcodrean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 18:00:09 by vcodrean          #+#    #+#             */
/*   Updated: 2022/09/19 19:23:39 by vcodrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_strnstr ---> locate a string within a string in a len bytes
  len times. 
  
  The strnstr() function locates a given string in a string where no more
  than len characters are searched.
  It mimics the strnstr function from the string library.*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[i] == '\0')
		return (((char *)haystack + i));
	while (haystack[i] != '\0' && i < len)
	{
		if (haystack[i] == needle[j])
		{
			while (haystack[i + j] == needle[j] && ((i + j) < len))
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
