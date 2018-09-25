/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize_empty_flags_paths.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 17:11:47 by amedvede          #+#    #+#             */
/*   Updated: 2018/09/24 21:04:33 by amedvede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "b_ls.h"

t_flags_paths *initialize_empty_flags_paths()
{
	t_flags_paths *flags_paths;
	
	flags_paths = (t_flags_paths *)malloc(sizeof(t_flags_paths));
	flags_paths->flags = flag_initialize();
	flags_paths->paths = path_initialize();
	//flags_paths->paths = NULL;
	
	return flags_paths;
}
