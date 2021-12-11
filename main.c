/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leotran <leotran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 20:02:42 by marvin            #+#    #+#             */
/*   Updated: 2021/12/03 12:52:35 by leotran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	char dest[11] = "Hello";
	char *src = "World";

	printf("%s\n", ft_strcat(dest, src));

	return (0);
}