/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leotran <leotran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 13:46:34 by leotran           #+#    #+#             */
/*   Updated: 2021/11/15 11:55:47 by leotran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	int		i;
	char	*arr;

	i = 0;
	arr = ft_strnew(len);
	if (!arr || s == NULL)
		return (NULL);
	while (len-- && s[start] != '\0' && ft_strlen(s) > start)
	{
		arr[i] = s[start];
		i++;
		start++;
	}
	return (arr);
}
