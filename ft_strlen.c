/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcodrean <vcodrean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:00:49 by vcodrean          #+#    #+#             */
/*   Updated: 2022/09/16 20:10:45 by vcodrean         ###   ########.fr       */
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
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void    ft_print_result(int n)
{
        char c;

        if (n >= 10)
                ft_print_result(n / 10);
        c = n % 10 + '0';
        write (1, &c, 1);
}

int             main(int argc, const char *argv[])
{
        int             arg;

        alarm(5);
        if (argc == 1)
                return (0);
        else if ((arg = atoi(argv[1])) == 1)
                ft_print_result(ft_strlen("Hello !"));
        else if (arg == 2)
                ft_print_result(ft_strlen("1"));
        else if (arg == 3)
                ft_print_result(ft_strlen("lorem\tipsum\tdolor\nsit\namet\n"));
        else if (arg == 4)
                ft_print_result(ft_strlen(""));
        else if (arg == 5)
                ft_print_result(ft_strlen("\n\n\f\r\t"));
        else if (arg == 6)
                ft_print_result(ft_strlen("   "));
        return (0);
}*/