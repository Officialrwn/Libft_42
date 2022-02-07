/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_ullong_nbr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leo <leo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 14:54:57 by leotran           #+#    #+#             */
/*   Updated: 2022/02/08 01:26:38 by leo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_put_ullong_nbr(unsigned long long n)
{
	unsigned long long	num;
	unsigned long long	i;
	int					count;

	num = n;
	i = 1;
	count = 0;
	if (num < 0)
	{
		ft_putchar('-');
		num *= -1;
	}
	while (i <= (num / 10))
	{
		i = i * 10;
		count++;
	}
	while (count > 0)
	{
		ft_putchar((num / i) + '0');
		num %= i;
		i /= 10;
		count--;
	}
	ft_putchar(num + '0');
}
