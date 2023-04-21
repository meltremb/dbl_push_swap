/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dbl_lst_add_front.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meltremb <meltremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 14:10:52 by meltremb          #+#    #+#             */
/*   Updated: 2023/04/20 13:09:05 by meltremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/dbl_extension_libft.h"

void	dbl_lst_add_front(t_pile *list, int elem)
{
	t_node	*temp;

	temp = ft_calloc(1, sizeof(t_node));
	if (!temp)
		return ;
	temp->content = elem;
	temp->prev = NULL;
	temp->next = list->first;
	if (list->first)
		list->first->prev = temp;
	else
		list->last = temp;
	list->first = temp;
	list->size++;
}
