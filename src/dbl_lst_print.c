/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dbl_lst_print.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meltremb <meltremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 14:10:56 by meltremb          #+#    #+#             */
/*   Updated: 2023/04/21 12:41:58 by meltremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/dbl_extension_libft.h"

void	dbl_lst_print(t_pile *a, t_pile *b)
{
	t_node	*node_a;
	t_node	*node_b;
	size_t	size;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	node_a = a->first;
	node_b = b->first;
	if (a->size > b->size)
		size = a->size;
	else if (a->size < b->size)
		size = b->size;
	else
		size = a->size;
	printf("---List A----------List B---\n");
	while (i++ < (size) && (node_a || b))
	{
		if (i <= a->size)
			printf("node%zu:[%d][%p][%p][%p]----------", i, node_a->index, node_a, node_a->prev, node_a->next);
		else
			printf("node%zu:[0]----------", i);
		if (j++ < b->size)
		{
			printf("node%zu:[%d][%p][%p][%p]\n", j, node_b->index, node_b, node_b->prev, node_b->next);
			node_b = node_b->next;
		}
		else
			printf("node%zu:[0]\n", j);
		if (node_a)
			node_a = node_a->next;
	}
}
