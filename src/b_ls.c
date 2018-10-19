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


	/*
	1. Read Flags										into the Flags Struct
	2. Throw Flagg Error								return if nessecary
	3. Read Paths										into Linked List
	3. Display Path Errors
	4. Apply flags 										-l && -r to paths									
	5. Display Files									(with proper flags)
	6. Display SymLinks									(with proper flags)
	7. Display Directories								(with proper flags)
	*/

#include "../includes/b_ls.h"

void	b_ls(int argc, char **argv)
{
	t_flags	flags;
	t_list	*paths;

	//	1. Read Flags				->			Valid Flags: -a -l -r -t
	flags = get_flags(argc, argv);
	
	if(flags.invalid == 1)
		return ;

	//	3. Read Paths
	paths = get_paths(argc, argv);
	
	//	4. Display Path Errors
	paths = get_errors(paths);
	
	//	5. Sort by lexiogical order and by modification time (-l && -r)
	paths = apply_flags_r_t(paths, flags);

	//	6. Display files
	display_files(paths, flags);
	
	//	7. Display simlinks
	display_symlinks(paths, flags);
	
	//	8. Display directories			=> TO FINISH: Fix formatting for flag -l
	display_dirs(paths, flags);

	//CLEAN MEMORY LEAKS
}
