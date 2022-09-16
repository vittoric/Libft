/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcodrean <vcodrean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 17:32:39 by vcodrean          #+#    #+#             */
/*   Updated: 2022/09/16 16:32:03 by vcodrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*decimal-digit character test and any char for an alphabetic char*/

int	ft_isalnum(int v)
{
	return ((v >= 'a' && v <= 'z') || (v >= 'A' && v <= 'Z')
		|| (v >= '0' && v <= '9'));
}

/*
#include <ctype.h>
#include <stdio.h>
int	main(void)
{
	int a ='1';
	printf("%d\n", ft_isalnum(a));
	printf("%d\n", isalnum(a));
	return (0);
}*/