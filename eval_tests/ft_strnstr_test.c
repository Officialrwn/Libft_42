/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leotran <leotran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:37:33 by leotran           #+#    #+#             */
/*   Updated: 2021/11/04 14:05:31 by leotran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char *haystack = "Was this fattee facface ce face[$et the face that launch'd a thousand ships";
	char *needle = "face";
	int i;
	char *a, *b;
	i = 22;
	a = ft_strnstr(haystack, needle, i);
	b = strnstr(haystack, needle, i);
 
	printf("ft: %s\n", a);
	printf("std: %s\n", b);
	return (0);
}
