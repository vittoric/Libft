/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcodrean <vcodrean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 17:32:39 by vcodrean          #+#    #+#             */
/*   Updated: 2022/09/15 13:34:57 by vcodrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*decimal-digit character test and any char for an alphabetic char*/

int	ft_isalnum(int v)
{
	return ((ft_isdigit(v)) || (ft_isalpha(v)));
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