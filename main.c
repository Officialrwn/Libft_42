/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leotran <leotran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:37:33 by leotran           #+#    #+#             */
/*   Updated: 2021/11/04 14:25:12 by leotran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	// test overlappingmemories memccpy? 
	char str[] = "Hello'\0'World";
	char *a, *b;
	char c = '\0';

	a = ft_strrchr(str, c);
	b = strrchr(str, c);

	printf("ft: %s\n", a);
	printf("std: %s\n", b);

	return (0);
}
