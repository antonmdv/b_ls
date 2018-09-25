/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   path_initialize.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 20:23:26 by amedvede          #+#    #+#             */
/*   Updated: 2018/09/25 13:48:39 by amedvede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "b_ls.h"

t_paths	*path_initialize(void)
{
	t_paths *paths;

	paths = malloc(sizeof(t_paths));
	paths->folder = "./";
	paths->next = NULL;
	
	return (paths);	
}
