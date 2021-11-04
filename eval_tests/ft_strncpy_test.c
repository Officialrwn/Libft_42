/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leotran <leotran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:37:33 by leotran           #+#    #+#             */
/*   Updated: 2021/11/03 13:36:44 by leotran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	// test overlappingmemories memccpy? 
	char str[] = "HelloWorld";
	char dest[20];
	char dest2[20];
	
	char *a = ft_strncpy(dest, str, 15);
	char *b = strncpy(dest2, str, 15);
	
	printf("%s\n", a);
	printf("%s\n", b);

	return (0);
}
