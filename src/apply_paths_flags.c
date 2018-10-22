/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_paths_flags.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/21 16:55:11 by amedvede          #+#    #+#             */
/*   Updated: 2018/10/21 16:55:12 by amedvede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/b_ls.h"

t_list		*apply_paths_flags(t_list *paths, t_flags flags)
{
	paths = sort_by_name(paths, flags.r);
	if (flags.t == 1)
		paths = sort_by_time(paths, flags.r);
	return (paths);
}
