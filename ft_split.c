/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcodrean <vcodrean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 15:25:35 by vcodrean          #+#    #+#             */
/*   Updated: 2022/10/01 10:49:48 by vcodrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**static int	count_words(char const *s, char c)
 * It counts the number of words in a string
 * 
 * @param char s The string to be split.
 * @param char c the delimiter
 * 
 * @return The number of words in the string.
 * 
 * 
 * 
 * static void	*ft_free(char **memry, size_t aux)
 * This function frees the memory allocated to the 2D array
 * 
 * @param char memry the memory to be freed
 * @param size_t aux is the number of lines in the file.
 * 
 * @return A pointer to a char.
 * 
 * 
 * 
 * * static void	split_str(char **ptr, char *str, char c, int nwords)
 * It splits a string into an array of strings, using a given character
 *  as a delimiter
 * 
 * @param char ptr the array of strings that will be returned
 * @param char str the string to be split
 * @param char c the character to split the string by
 * @param int nwords number of words in the string
 * 
 * @return A pointer to a pointer to a char.
 * 
 * 
 * 
 * 
 * char	**ft_split(char const *s, char c)
 * Split a string into an array of strings, using a given character 
 * as a delimiter
 * 
 * @param char s The string to be split.
 * @param char c the character to split the string by
 * 
 * @return A pointer to an array of pointers to characters.
 */
static int	count_words(char const *s, char c)
{
	int	cwords;

	cwords = 0;
	if (!*s)
		return (0);
	while (*s)
	{
		if (*s == c)
		{
			cwords++;
			while (*s == c)
				s++;
		}
		else
			s++;
	}
	cwords++;
	return (cwords);
}

static void	*ft_free(char **memry, size_t aux)
{
	size_t	i;

	i = 0;
	while (i < aux)
	{
		free(memry[i]);
		i++;
	}
	free(memry);
	return (NULL);
}

static void	split_str(char **ptr, char *str, char c, int nwords)
{
	int		i;
	char	*aux;

	i = 0;
	if ((nwords > 0) && *str)
	{
		while (i < (nwords - 1))
		{
			aux = ft_strchr(str, c);
			ptr[i++] = ft_substr(str, 0, aux - str);
			if (ptr == 0)
			{
				ft_free(ptr, i);
				return ;
			}
			while (*aux == c)
				aux++;
			str = aux;
		}
		ptr[i++] = ft_strdup(str);
		ptr[i] = 0;
	}
}

char	**ft_split(char const *s, char c)
{
	int		nwords;
	char	**ptr;
	char	*str;
	char	a[2];

	a[0] = c;
	a[1] = '\0';
	if (s)
	{
		str = ft_strtrim(s, a);
		if (str)
		{
			nwords = count_words(str, c);
			ptr = ft_calloc((nwords + 1), sizeof(char *));
			if (ptr)
				split_str(ptr, str, c, nwords);
			free(str);
			return (ptr);
		}
	}
	return (0);
}
