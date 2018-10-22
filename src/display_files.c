/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_files.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/21 16:55:37 by amedvede          #+#    #+#             */
/*   Updated: 2018/10/21 16:55:39 by amedvede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/b_ls.h"

void				display_files(t_list *paths, t_flags flags)
{
	DIR				*dir;
	t_list			*file_list;
	struct stat		buff;

	file_list = initialize_node();
	while (paths)
	{
		dir = opendir(((char *)paths->data));
		stat(((char *)paths->data), &buff);
		if ((buff.st_mode & S_IFREG) == S_IFREG
			&& !stat((char *)paths->data, &buff))
		{
			lstat((char *)paths->data, &buff);
			if (((buff.st_mode & S_IFLNK) != S_IFLNK))
				file_list = add_node(file_list, paths->data);
		}
		paths = paths->next;
	}
	if (file_list->data != NULL)
		display_content(".", file_list, flags);
}
