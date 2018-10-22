/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_flags_r_t.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/21 16:55:02 by amedvede          #+#    #+#             */
/*   Updated: 2018/10/21 16:55:04 by amedvede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/b_ls.h"

t_list		*apply_flags_r_t(t_list *paths, t_flags flags)
{
	paths = sort_by_name(paths, flags.r);
	if (flags.t == 1)
		paths = sort_by_time(paths, flags.r);
	return (paths);
}
