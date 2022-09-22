/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcodrean <vcodrean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 15:14:45 by vcodrean          #+#    #+#             */
/*   Updated: 2022/09/22 19:55:00 by vcodrean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int count_char(int num)
{
	int count;

	count = 0;
	if (num != 0)
	{
		if (num < 0)
		{
			n = n *(-1);
			count++;
		}
		while (num != 0)
		{
			num = num / 10;
			count++;
		}
	}
	else
		count = 1;
	return (count);
}

char	*ft_itoa(int n)
{
	int	len;
	char	*str;

	len = count_char(n);

	str = (char *) malloc(sizeof(char) * (len + 1 }));
	if (!str)
		return(str);
	if (num == 0)
	{
		str[0] = '0';
		str[1] = '\0'
		return (str);
	}
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return((char *)10);
	
}

int main()
{
	ft_itoa(569369);
}