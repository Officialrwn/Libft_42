/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_listtest.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leotran <leotran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 10:07:07 by leotran           #+#    #+#             */
/*   Updated: 2021/11/24 09:36:30 by leotran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	ft_printflistcontents(t_dlist **alst)
{
	t_dlist	*temp;

	temp = *alst;
	while (temp != NULL)
	{
		printf("\nNode p = %p\n", temp);
		printf("previous = %p\n", temp->previous);
		printf("content = %s\n", temp->content);
		printf("next = %p\n", temp->next);
		temp = temp->next;
	}
}

int	main(void)
{
	/*
	t_dlist **ptr;
	t_dlist	*alst;
	t_dlist	*arr0 = ft_dlstnew("2irst", 6);
	t_dlist	*arr1 = ft_dlstnew("1irst", 6);
	t_dlist	*arr2 = ft_dlstnew("0irst", 6);
	t_dlist	*arr3 = ft_dlstnew("3irst", 6);
	t_dlist	*arr4 = ft_dlstnew("Last", 5);

	ptr = &alst;

	alst = ft_dlstnew("First", 6);
	ft_dlstaddfront(ptr, arr0);
	ft_dlstaddfront(ptr, arr1);
	ft_dlstaddfront(ptr, arr2);
	ft_dlstaddend(ptr, arr3);
	ft_dlstaddend(ptr, arr4);

	ft_printflistcontents(ptr);

	ft_dlstdelfront(ptr, &ft_bzero);
	printf("AFTER DELFRONT: First should be 1irst\n");
	ft_printflistcontents(ptr);
	//printf("alst  is  %p\n", alst);
	
	printf("arr1 previous is now %p\n", arr1->previous);*/

}