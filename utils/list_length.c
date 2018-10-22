/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_length.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/21 16:59:54 by amedvede          #+#    #+#             */
/*   Updated: 2018/10/21 16:59:56 by amedvede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/b_ls.h"

int		list_length(t_list *list)
{
	int	len;

	len = 0;
	while (list)
	{
		list = list->next;
		len++;
	}
	return (len);
}
