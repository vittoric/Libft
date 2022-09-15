/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcodrean <vcodrean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:50:49 by vcodrean          #+#    #+#             */
/*   Updated: 2022/09/15 13:58:59 by vcodrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*printing character test (space character inclusive)*/

int	ft_isprint(int v)
{
	if (v >= 32 && v <= 126)
		return (1);
	return (0);
}

/*
#include <ctype.h>
#include <stdio.h>
int	main(void)
{
	int a =33;
	printf("%d\n", ft_isprint(a));
	printf("%d\n", isprint(a));
	return (0);
}*/
