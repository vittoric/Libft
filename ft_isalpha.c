/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcodrean <vcodrean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 12:49:06 by vcodrean          #+#    #+#             */
/*   Updated: 2022/09/15 11:10:53 by vcodrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* test any char for an alphabetic char */

int	ft_isalpha(int v)
{
	if ((v >= 'A' && v <= 'Z') || (v >= 'a' && v <= 'z'))
		return (1);
	return (0);
}
/*
 #include <ctype.h>
  #include <stdio.h>
int	main(void)
{
	char a ='1';
	printf("%d\n", ft_isalpha(a));
	printf("%d\n", isalpha(a));
	return (0);
}*/
