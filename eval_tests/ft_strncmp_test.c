/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leotran <leotran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:37:33 by leotran           #+#    #+#             */
/*   Updated: 2021/11/03 12:46:54 by leotran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	// test overlappingmemories memccpy? 
	char str[] = "HelloWorle";
	char str2[] = "HelloWorld";
	int i = 0;

	while (i++ <= strlen(str + 1))
	{
		printf("strncmp is: %d ft_strncmp is: %d\n", strncmp(str, str2, i), ft_strncmp(str, str2, i));
	}	

	return (0);
}
