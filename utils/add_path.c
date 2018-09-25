/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_path.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/25 12:52:20 by amedvede          #+#    #+#             */
/*   Updated: 2018/09/25 13:48:36 by amedvede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "b_ls.h"

void	 add_path(t_paths *paths, char *path)
{
	while(paths->next)
	{
		//printf("path: %s", paths->folder);
		paths = paths->next;
	}
	t_paths *node;

	node = malloc(sizeof(t_paths));
	node->folder = path;
	node->next = NULL;
	
	paths->next = node;
	
}
