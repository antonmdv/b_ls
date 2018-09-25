/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_ls.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 10:51:27 by amedvede          #+#    #+#             */
/*   Updated: 2018/09/25 13:43:29 by amedvede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_LS_H
# define B_LS_H

# include <stdio.h>
# include <sys/types.h>
# include <dirent.h>
# include <stdlib.h>

typedef struct		s_flags
{
	int				a;
	int				l;
	int				t;
	int				r;
}					t_flags;

typedef struct		s_paths
{
	char			*folder;
	//s_paths			*next;
	struct s_paths	*next;
}					t_paths;

typedef struct		s_flags_paths
{
	t_paths			*paths;
	t_flags			flags;
}					t_flags_paths;

typedef struct		s_contents
{
	struct dirent	*ep;
	struct s_contents	*next;
}					t_contents;

void				b_ls(int argc, char **argv);
t_flags				flag_initialize(void);
t_paths				*path_initialize(void);
t_contents			*add_list_entry(t_contents *head, struct dirent *ep);
t_flags_paths		*initialize_empty_flags_paths(void);
t_flags_paths		*parse_flags_paths(int argc, char **argv);
t_contents			*fill_contents(void);
void				add_path(t_paths *paths, char *path);

#endif
