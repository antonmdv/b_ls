/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize_flags.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/21 16:59:14 by amedvede          #+#    #+#             */
/*   Updated: 2018/10/21 16:59:17 by amedvede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/b_ls.h"

t_flags		initialize_flags(void)
{
	t_flags	flags;

	flags.a = 0;
	flags.l = 0;
	flags.r = 0;
	flags.t = 0;
	flags.invalid = 0;
	return (flags);
}
