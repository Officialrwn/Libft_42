/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leotran <leotran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:37:33 by leotran           #+#    #+#             */
/*   Updated: 2021/11/04 12:47:55 by leotran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char *haystack = "Was this fattee facface ce face[$et the face that launch'd a thousand ships";
	char *needle = "face";
 
	char *a, *b;
	a = ft_strstr(haystack, needle);
	b = strstr(haystack, needle);
 
	printf("ft: %s\n", a);
	printf("std: %s\n", b);
	return (0);
}
