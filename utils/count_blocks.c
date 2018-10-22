/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_blocks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/21 16:57:51 by amedvede          #+#    #+#             */
/*   Updated: 2018/10/21 17:08:03 by amedvede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/b_ls.h"

long long			count_blocks(char *current_path, t_list *entity, int flag_a)
{
	long long		blocks;
	struct stat		buff;
	char			*name;
	char			*file_name;

	name = "";
	blocks = 0;
	while (entity)
	{
		file_name = (char *)entity->data;
		if (current_path[ft_strlen(current_path) - 1] != '/')
			name = ft_strcat(ft_strcat(current_path, "/"), file_name);
		else
			name = ft_strcat(current_path, file_name);
		lstat(name, &buff);
		if (flag_a == 1)
			blocks += buff.st_blocks;
		else
		{
			if (file_name[0] != '.')
				blocks += buff.st_blocks;
		}
		entity = entity->next;
	}
	return (blocks);
}
