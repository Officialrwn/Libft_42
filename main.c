/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leo <leo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 14:47:16 by leo               #+#    #+#             */
/*   Updated: 2022/02/08 03:18:37 by leo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <stdio.h>

int main (void)
{
	int a = 5;
	printf("printf real: %p\n", &a);
	printf("%lld\n", (long long) &a);
	ft_itoa_base((long long) &a, 16);
	ft_put_llong_nbr((long long) &a);
	ft_putaddr((long long) &a);
	return (0);
}