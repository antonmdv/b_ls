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
# include <sys/stat.h>
# include <pwd.h>
# include <grp.h>
# include <time.h>
# include <unistd.h>

typedef struct		s_flags
{
	int				a;
	int				l;
	int				t;
	int				r;
	int				invalid;
}					t_flags;

typedef struct		s_list
{
	void			*data;
	struct s_list	*next;
}					t_list;

void				b_ls(int argc, char **argv);
t_flags				get_flags(int argc, char **argv);
t_flags				initialize_flags(void);
t_list				*get_paths(int argc, char **argv);
t_list				*initialize_node(void);
t_list				*add_node(t_list *list, void *data);
t_list				*get_errors(t_list *paths);
t_list				*apply_flags_r_t(t_list *paths, t_flags flags);
t_list				*sort_by_name(t_list *paths, int flag_reverse);
t_list				*sort_by_time(t_list *paths, int flag_reverse);
void				display_files(t_list *paths, t_flags flags);
void				display_symlinks(t_list *paths, t_flags flags);
void				display_dirs(t_list *paths, t_flags flags);
void				display_content(char *current_path,
									t_list *current_content, t_flags flags);
t_list				*get_folder_content(char *folder_name);
int					is_valid_flag(char c);
t_flags				set_valid_flag(t_flags flags, char type);
t_flags				set_invalid_flag(t_flags flags, char invalid);
size_t				ft_strlen(const char *str);
int					ft_strcmp(const char *s1, const char *s2);
void				node_swap(t_list *node_one, t_list *node_two);
void				node_copy(t_list *src, t_list *dst);
int					list_length(t_list *list);
long long			count_blocks(char *current_path,
								t_list *entity, int flag_a);
void				l_mode_display(char *current_path, char *entity);
void				mode_select(mode_t mode, char *c);
char				*mode_print(mode_t mode);
char				*ft_strcat(char *dest, char *src);
char				*ft_strdup(char *src);

#endif
