/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcodrean <vcodrean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:00:49 by vcodrean          #+#    #+#             */
/*   Updated: 2022/09/15 16:31:57 by vcodrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*find length of string*/

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	i++;
	return (i);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	printf("%zu\n", ft_strlen("Cupacke"));
	printf("%zu\n", ft_strlen("Ipsum"));
	printf("%zu\n", ft_strlen("jelly bears"));
	printf("%zu\n\n", ft_strlen("42"));
	printf("%zu\n", strlen("Cupacke"));
	printf("%zu\n", strlen("Ipsum"));
	printf("%zu\n", strlen("jelly bears"));
	printf("%zu\n", strlen("42"));
	return (0);
}*/