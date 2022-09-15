/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcodrean <vcodrean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:16:04 by vcodrean          #+#    #+#             */
/*   Updated: 2022/09/15 11:10:29 by vcodrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*decimal-digit character test*/

int	ft_isdigit(int v)
{
	if (v >= '0' && v <= '9')
		return (1);
	return (0);
}
/*
#include <ctype.h>
#include <stdio.h>
int	main(void)
{
	int a = 1;
	printf("%d\n", ft_isdigit(a));
	printf("%d\n", isalpha(a));
	return (0);
}*/
