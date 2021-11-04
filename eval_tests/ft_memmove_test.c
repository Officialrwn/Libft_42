/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leotran <leotran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:37:33 by leotran           #+#    #+#             */
/*   Updated: 2021/11/03 08:20:29 by leotran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{

	// test overlappingmemories memccpy? 
	
	char *str = "HelloWorld";
	char arr[50] = "HelloWorld";
	char arr2[50] = "HelloWorld";
	size_t n = 	5;
	char *a, *b;
	a = ft_memmove(arr, arr + 3, n);
	b = memmove(arr2, arr2 + 3, n);
	
	printf("%s\n", a);
	printf("%s\n", b);


	return (0);
}
