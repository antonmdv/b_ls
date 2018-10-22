/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_paths.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/21 16:56:30 by amedvede          #+#    #+#             */
/*   Updated: 2018/10/21 16:56:35 by amedvede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/b_ls.h"

t_list		*get_paths(int argc, char **argv)
{
	t_list		*paths;
	int			i;
	int			is_reading_paths;

	is_reading_paths = 0;
	i = 1;
	paths = initialize_node();
	while (i < argc)
	{
		while (argv[i] && (argv[i][0] == '-') && (is_reading_paths == 0))
			i++;
		is_reading_paths = 1;
		if (i >= argc)
			break ;
		paths = add_node(paths, argv[i]);
		i++;
	}
	if (paths->data == NULL)
		paths = add_node(paths, ".");
	return (paths);
}
