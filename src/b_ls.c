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

#include "b_ls.h"

void	b_ls(int argc, char **argv)
{
	t_contents			*contents;
	t_flags_paths	*flags_paths; 
	
	if(argc > 1)
		flags_paths = parse_flags_paths(argc, argv);
	else			
		flags_paths = initialize_empty_flags_paths();


	/*for every single path
	  		create contents
	 
	for every signle contentes
	 		sort with flags
	 
	for every contents list
	 		output
	 */
	
	//FiLL contents with path "./" late pass the actual path 
	contents = fill_contents();
	
	while(contents != NULL)
	{
		//contents = contents->next;
		printf("%s\n",contents->ep->d_name);
		contents = contents->next;
	}
	
	/*

	if(argc > 1)
		get_flags;

	contents = fill_list();

	contents = sort(contents, flags);

	output(contents);
	*/
	argc = 0;
	argv = NULL;
	//printf("Standart Path: %s\n", flags_paths->paths->folder);
	printf("Flags\t a:%d\tl:%d\tr:%d\tr:%d\t\n",flags_paths->flags.a, flags_paths->flags.l, flags_paths->flags.t, flags_paths->flags.r);
	
	while(flags_paths->paths)
	{
		printf("Paths: %s\n", flags_paths->paths->folder);
		flags_paths->paths = flags_paths->paths->next;
	}
	
	
}
