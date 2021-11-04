/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leotran <leotran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:23:23 by leotran           #+#    #+#             */
/*   Updated: 2021/11/04 13:05:53 by leotran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	len = i;
	while (src[j])
	{
		if (i < n - 1)
		{
			dest[i] = src[j];
			i++;
		}
		j++;
		len++;
	}
	dest[i] = '\0';
	return (len);
}
