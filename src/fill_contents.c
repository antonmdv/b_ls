/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_contents.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 11:48:55 by amedvede          #+#    #+#             */
/*   Updated: 2018/09/24 21:04:26 by amedvede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "b_ls.h"

t_contents *fill_contents(void)
{
	t_contents		*contents;
	DIR				*dp;
	struct dirent	*ep;
	char			*path;

	path = "./";
	dp = opendir(path);
	contents = NULL;
	if (dp != NULL)
	{
		while ((ep = readdir (dp)))
		{	
			//puts(ep->d_name);
			contents = add_list_entry(contents,ep);
		}
		(void) closedir (dp);
	}
	else
		perror("Couldn't open the directory");
	return contents;
}
