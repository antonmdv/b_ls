/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   l_mode_display.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/21 16:59:48 by amedvede          #+#    #+#             */
/*   Updated: 2018/10/21 16:59:50 by amedvede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/b_ls.h"

void		print_link(char *name)
{
	ssize_t		len;
	char		link[1024];

	len = readlink(name, link, sizeof(link) - 1);
	if (len != -1)
		link[len] = '\0';
	else
	{
		perror(name);
		exit(-1);
	}
	printf(" -> %s", link);
}

void		l_mode_display(char *current_path, char *entity)
{
	char		c;
	struct stat	buff;
	char		*name;

	name = "";
	if (current_path[ft_strlen(current_path) - 1] != '/')
		name = ft_strcat(ft_strcat(current_path, "/"), entity);
	else
		name = ft_strcat(current_path, entity);
	lstat(name, &buff);
	mode_select(buff.st_mode, &c);
	printf("%c", c);
	printf("%s", mode_print(buff.st_mode));
	printf("%3i ", buff.st_nlink);
	printf("%-6s  ", getpwuid(buff.st_uid)->pw_name);
	printf("%-12s", getgrgid(buff.st_gid)->gr_name);
	printf("%5lld ", buff.st_size);
	printf("%.12s ", ctime(&buff.st_mtime) + 4);
	printf("\t%s", entity);
	if (S_ISLNK(buff.st_mode))
		print_link(name);
	printf("\n");
}
