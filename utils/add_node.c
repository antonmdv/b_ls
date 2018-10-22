/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_node.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/21 16:57:44 by amedvede          #+#    #+#             */
/*   Updated: 2018/10/21 16:57:46 by amedvede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/b_ls.h"

t_list		*add_node(t_list *list, void *data)
{
	t_list	*head;
	t_list	*node;

	if ((list->data == NULL && list->next == NULL) || list == NULL)
	{
		list->data = ft_strdup(data);
		list->next = NULL;
		return (list);
	}
	head = list;
	while (list->next)
		list = list->next;
	node = initialize_node();
	node->data = ft_strdup(data);
	node->next = NULL;
	list->next = node;
	return (head);
}
