/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_initalize.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 11:32:57 by amedvede          #+#    #+#             */
/*   Updated: 2018/09/24 18:36:05 by amedvede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "b_ls.h"

t_flags		flag_initialize(void)
{
	t_flags flags;
	
	//flags = malloc(sizeof(t_flags));	

	flags.a = 0;
	flags.l = 0;
	flags.t = 0;
	flags.r = 0;
	return (flags);
}
