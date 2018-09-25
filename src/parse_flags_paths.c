/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize_flags_paths.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 20:42:46 by amedvede          #+#    #+#             */
/*   Updated: 2018/09/25 13:51:35 by amedvede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "b_ls.h"

t_flags_paths *parse_flags_paths(int argc, char **argv)
{
	int i = 1;
	int j = 0;
	int end = 0;

	t_flags_paths *flags_paths;
	t_flags flags = flag_initialize();
	t_paths *paths = path_initialize();

	argc = 0;	
	while(argv[i])
	{
		//get flags
		if(argv[i][0] == '-' && end == 0)
		{
			j = 0;
			while(argv[i][j])
			{
				if (argv[i][j] == 'l')
					flags.l = 1;
				if (argv[i][j] == 'r')
					flags.r = 1;
				if (argv[i][j] == 'a')
					flags.a = 1;
				if (argv[i][j] == 't')
					flags.t = 1;
				++j;
			}
			if(j == 1)
			{
				end = 1;
				add_path(paths, "-");
			}
		}
		
		else
		{
			end = 1;
			add_path(paths, argv[i]);
		}
		
		i++;
	}
	/*
	while(paths)
	{
		printf("Paths: %s\n", paths->folder);
		paths = paths->next;
	}
	*/
	flags_paths = (t_flags_paths *)malloc(sizeof(t_flags_paths));
	flags_paths->flags = flags;
	flags_paths->paths = paths;
	return (flags_paths);
}
