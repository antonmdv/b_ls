/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_errors.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/21 16:55:56 by amedvede          #+#    #+#             */
/*   Updated: 2018/10/21 16:55:59 by amedvede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/b_ls.h"

t_list				*get_errors(t_list *paths)
{
	t_list			*root;
	DIR				*dir;
	struct stat		st;

	paths = sort_by_name(paths, 0);
	root = paths;
	while (paths)
	{
		dir = opendir((char *)paths->data);
		if (stat((char *)paths->data, &st) && !dir)
			printf("b_ls: %s: No such file or directory\n",
					(char *)paths->data);
		paths = paths->next;
	}
	return (root);
}
