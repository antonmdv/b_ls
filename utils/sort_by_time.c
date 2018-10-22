/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_by_time.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/21 17:02:34 by amedvede          #+#    #+#             */
/*   Updated: 2018/10/21 17:26:55 by amedvede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/b_ls.h"

t_list		*sort_by_time(t_list *paths, int flag_reverse)
{
	t_list		*i;
	t_list		*j;
	struct stat	st1;
	struct stat	st2;

	i = paths;
	while (i)
	{
		j = paths;
		while (j->next)
		{
			lstat((char *)j->data, &st1);
			lstat((char *)j->next->data, &st2);
			if (flag_reverse ? st1.st_mtime > st2.st_mtime
			: st1.st_mtime < st2.st_mtime)
				node_swap(j, j->next);
			else if (st1.st_mtime == st2.st_mtime)
			{
				if (flag_reverse ? st1.st_mtimespec.tv_nsec
				> st2.st_mtimespec.tv_nsec
				: st1.st_mtimespec.tv_nsec < st2.st_mtimespec.tv_nsec)
					node_swap(j, j->next);
			}
			j = j->next;
		}
		i = i->next;
	}
	return (paths);
}
