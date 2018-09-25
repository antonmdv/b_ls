/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_list_entry.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 14:58:16 by amedvede          #+#    #+#             */
/*   Updated: 2018/09/24 21:10:22 by amedvede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "b_ls.h"

t_contents	*add_list_entry(t_contents *contents, struct dirent *ep)
{ 
	t_contents *curr;
	t_contents *node;

	if(contents == NULL)
	{
		//puts(ep->d_name);
		contents = malloc(sizeof(t_contents));
		contents->next = NULL;
		contents->ep = ep;
	}
	else
	{
		curr = contents;
		while(curr->next != NULL)
			curr = curr->next;
		node = malloc(sizeof(t_contents));
		node->ep = ep;
		node->next = NULL;
		curr->next = node;
	}
	return(contents);
}
