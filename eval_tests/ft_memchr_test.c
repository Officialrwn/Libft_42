/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leotran <leotran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:37:33 by leotran           #+#    #+#             */
/*   Updated: 2021/11/03 10:16:55 by leotran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	// test overlappingmemories memccpy? 
	char str[] = "HelloWorld";
	char *a, *b;
	char c = 'o';

	a = ft_memchr(str, c, 3);
	b = memchr(str, c, 3);

	printf("%s\n", a);
	printf("%s\n", b);


	return (0);
}
