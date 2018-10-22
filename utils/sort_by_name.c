/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_by_name.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/21 17:01:26 by amedvede          #+#    #+#             */
/*   Updated: 2018/10/21 17:01:28 by amedvede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/b_ls.h"

t_list		*sort_by_name(t_list *paths, int flag_reverse)
{
	t_list	*i;
	t_list	*j;

	i = paths;
	while (i)
	{
		j = paths;
		while (j->next)
		{
			if (flag_reverse ? ft_strcmp((char *)j->data,
			(char *)j->next->data) < 0 :
			ft_strcmp((char *)j->data, (char *)j->next->data) > 0)
				node_swap(j, j->next);
			j = j->next;
		}
		i = i->next;
	}
	return (paths);
}
