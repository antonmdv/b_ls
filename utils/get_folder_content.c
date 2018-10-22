/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_folder_content.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/21 16:58:55 by amedvede          #+#    #+#             */
/*   Updated: 2018/10/21 16:58:57 by amedvede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/b_ls.h"

t_list				*get_folder_content(char *folder_name)
{
	t_list			*contents;
	DIR				*dir;
	struct stat		buff;
	struct dirent	*ep;

	contents = initialize_node();
	dir = opendir(folder_name);
	stat(folder_name, &buff);
	if (dir && (buff.st_mode & S_IFDIR) == S_IFDIR)
		while (((ep = readdir(dir))))
			contents = add_node(contents, ep->d_name);
	(void)closedir(dir);
	return (contents);
}
