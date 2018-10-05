/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_ls.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 11:03:55 by amedvede          #+#    #+#             */
/*   Updated: 2018/09/25 13:49:31 by amedvede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/b_ls.h"

void	b_ls(int argc, char **argv)
{
	t_flags	flags;
	t_list	*paths;

	//for pronting paths
	t_list	*tmp;

	//	1. Read Arguments
	flags = get_flags(argc, argv);

	//test print flag struct
	printf("Flags:\ta: %d\tl: %d\tt: %d\tr: %d\tINVALID: %d\n", flags.a, flags.l, flags.t, flags.r, flags.invalid);

	/*
	How to throw => usage: ./b_ls [alrt] [file ...]
	if(flags.invalid == 1)
	{
		printf("b_ls: illegal option -- %c\n", str[i]);
		printf("usage: ./b_ls [alrt] [file ...]\n");
		return ;
	}
	*/


	//	2. Read Paths
	paths = get_paths(argc, argv);
	
	//	3. Display Path Errors
	paths = get_errors(paths);
	
	//	4. Sort by lexiogical order and by modification time
	paths = apply_paths_flags(paths, flags);

	//test print path contents
	tmp = paths;
	while(tmp)
	{
		printf("%s\n", (char *)tmp->data);
		tmp = tmp->next;
	}
	

	//	5. Sort everything
	//For every valid path get contents of the folder and sort them with proper flags; 
	//contents_paths = parse_all_contents(contents_paths);

	/*
	1. Read Arguments										into the Flags Struct
	2. Read Paths											into Linked List
	3. Display Path Errors									and remove invalid from linked list
	4. For every valid path get contents of the folder		Linked list of (Linked List of Contents)
	5. Display Files
	6. Display SymLinks
	7. Display Directories
	*/
}
