/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_invalid_flag.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/21 17:01:06 by amedvede          #+#    #+#             */
/*   Updated: 2018/10/21 17:01:08 by amedvede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/b_ls.h"

t_flags		set_invalid_flag(t_flags flags, char invalid)
{
	flags.invalid = 1;
	printf("b_ls: illegal option -- %c\n", invalid);
	printf("usage: ./b_ls [-arlt] [file ...]\n");
	return (flags);
}
