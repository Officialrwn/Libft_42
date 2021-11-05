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
#include <stdlib.h>

int	main(void)
{
	// test overlappingmemories memccpy? 
	char str[] = "HelloWorld";
	char *a, *b;
	
	a = ft_strdup(str);
	b = strdup(str);
	
	printf("ft: %s\n", a);
	printf("std: %s\n", b);
	printf("ftlen: %d\n", ft_strlen(a));
	printf("stdlen: %d\n", ft_strlen(b));
	

	return (0);
}
