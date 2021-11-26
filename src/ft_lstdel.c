/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leotran <leotran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 15:17:45 by leotran           #+#    #+#             */
/*   Updated: 2021/11/22 09:54:25 by leotran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*temp;
	t_list	*head;

	temp = (*alst);
	while (temp != NULL)
	{
		head = temp->next;
		(*del)(temp->content, temp->content_size);
		free(temp);
		temp = NULL;
		temp = head;
	}
	*alst = NULL;
}
