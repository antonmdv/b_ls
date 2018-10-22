/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize_node.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/21 16:59:26 by amedvede          #+#    #+#             */
/*   Updated: 2018/10/21 16:59:29 by amedvede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/b_ls.h"

t_list		*initialize_node(void)
{
	t_list	*paths;

	paths = (t_list *)malloc(sizeof(t_list*));
	paths->data = NULL;
	paths->next = NULL;
	return (paths);
}
