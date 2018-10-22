/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_valid_flag.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/21 17:01:14 by amedvede          #+#    #+#             */
/*   Updated: 2018/10/21 17:01:15 by amedvede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/b_ls.h"

t_flags		set_valid_flag(t_flags flags, char type)
{
	if (type == 'a')
		flags.a = 1;
	if (type == 'l')
		flags.l = 1;
	if (type == 'r')
		flags.r = 1;
	if (type == 't')
		flags.t = 1;
	return (flags);
}
