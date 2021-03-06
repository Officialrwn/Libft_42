/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstswap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leo <leo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 22:23:06 by leo               #+#    #+#             */
/*   Updated: 2022/03/16 19:09:12 by leo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstswap(t_list **list)
{
	t_list	*node;

	node = (*list);
	(*list) = (*list)->next;
	node->next = (*list)->next;
	(*list)->next = node;
}
