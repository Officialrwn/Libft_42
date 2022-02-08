/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leotran <leotran@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 14:47:16 by leo               #+#    #+#             */
/*   Updated: 2022/02/08 13:20:27 by leotran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <stdio.h>

int main (void)
{
	int a = 5;
	//printf("printf real: %p\n", &a);
	//printf("%lld\n", (long long) &a);
	printf("%p\n", &a);
	//ft_put_llong_nbr((long long) &a);
	ft_putaddr(&a);
	return (0);
}