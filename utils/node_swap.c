/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/21 17:00:58 by amedvede          #+#    #+#             */
/*   Updated: 2018/10/21 17:00:59 by amedvede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/b_ls.h"

void		node_swap(t_list *node_one, t_list *node_two)
{
	t_list	*tmp;

	tmp = (t_list *)malloc(sizeof(t_list));
	node_copy(node_one, tmp);
	node_copy(node_two, node_one);
	node_copy(tmp, node_two);
}
