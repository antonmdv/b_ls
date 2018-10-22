/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_ls.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 11:03:55 by amedvede          #+#    #+#             */
/*   Updated: 2018/10/21 16:55:23 by amedvede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/b_ls.h"

void			b_ls(int argc, char **argv)
{
	t_flags		flags;
	t_list		*paths;

	flags = get_flags(argc, argv);
	if (flags.invalid == 1)
		return ;
	paths = get_paths(argc, argv);
	paths = get_errors(paths);
	paths = apply_flags_r_t(paths, flags);
	display_files(paths, flags);
	display_symlinks(paths, flags);
	display_dirs(paths, flags);
}
