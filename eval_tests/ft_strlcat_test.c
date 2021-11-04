/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leotran <leotran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:37:33 by leotran           #+#    #+#             */
/*   Updated: 2021/11/04 13:05:08 by leotran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	// test overlappingmemories memccpy? 
	char str[] = "a potentially long string";

	char dest[50] = "This is ";
	char dest2[50] = "This is ";
	size_t n = 16;
	//char *a = ft_strlcat(dest, str, n);
	int a = ft_strlcat(dest, str, n);
	int b = strlcat(dest2, str, n);
	
	printf("ft: %d\n", a);
	printf("std: %d\n", b);
	printf("Original string: %s\n", str);
	printf("ft: %s\n", dest);
	printf("std: %s\n", dest2);
	

	return (0);
}
